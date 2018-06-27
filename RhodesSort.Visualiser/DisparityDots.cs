using System;
using Eto.Drawing;
using Eto.Forms;

namespace RhodesSort.Visualiser
{
    public class DisparityDots
    {
        private int length;
        private DisparityCachedList disparities;

        private Graphics graphics;

        private int width, height, paddingw, paddingh, refw, refh;

        public int Speed { get; set; } = 1;

        private static Color DotColor(int value, int length)
        {
            float angle = 360f * value / length;

            ColorHSB color = new ColorHSB(angle, 0.75f, 0.75f);

            return color.ToColor();
        }

        public DisparityDots(DisparityCachedList inputList)
        {
            disparities = inputList;
            length = inputList.Length;
        }

        private RectangleF GetRectangle(int value, int disparity)
        {
            double angle = 360.0 * value / length;
            double theta = Math.PI / 180.0 * angle;

            // coordinates of the centre
            float cx = paddingw + refw / 2f;
            float cy = paddingh + refh / 2f;

            double a = refw / 2.0;
            double b = refh / 2.0;

            // x,y lies on scaled ellipse
            double scale = (length - 2.0 * disparity) / length;

            float x = (float) (a * scale * Math.Cos(theta));
            float y = (float) (b * scale * Math.Sin(theta));

            return new RectangleF(x + cx, y + cy, 5f, 5f);
        }

        public void OnPaint(Object sender, PaintEventArgs pe)
        {
            graphics = pe.Graphics;

            width = (int)pe.ClipRectangle.Width;
            height = (int)pe.ClipRectangle.Height;

            paddingw = 10;
            paddingh = 10;
            refw = width - paddingw * 2;
            refh = height - paddingh * 2;


            for (int i = 0; i < Speed - 1; i++)
            {
                disparities.StepForward();
            }

            var indexListPair = disparities.StepForward();

            var list = indexListPair.Value;
            var index = indexListPair.Key;

            //graphics.FillRectangle(new SolidBrush(Colors.Black), graphics.ClipBounds);

            if (index != -1)
            {
                var value = list[index].Value;
                var rect = GetRectangle(list[index].Value, list[index].Disparity);
                // coordinates of the centre
                float cx = paddingw + refw / 2f;
                float cy = paddingh + refh / 2f;
                graphics.DrawLine(Colors.Black, cx, cy, rect.X, rect.Y);
                graphics.FillEllipse(new SolidBrush(DotColor(value, length)), rect);
            }


            int x = 0;
            foreach (DisparityValuePair dvp in list)
            {
                Color color = DotColor(dvp.Value, length);

                graphics.FillEllipse(new SolidBrush(color), GetRectangle(x++, dvp.Disparity));
            }
        }
    }
}
