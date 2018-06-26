using System;
using Eto.Drawing;
using Eto.Forms;

namespace RhodesSort.Visualiser
{
    public class DisparityDots
    {
        private int length;
        private DisparityCachedList disparities;

        private static Color DotColor(int value, int length)
        {
            float angle = 360f * value / length;

            ColorHSB color = new ColorHSB(angle, 0.5f, 0.5f);

            return color.ToColor();
        }

        public DisparityDots(DisparityCachedList inputList)
        {
            disparities = inputList;
            length = inputList.Length;
        }

        public void OnPaint(Object sender, PaintEventArgs pe)
        {
            var indexListPair = disparities.StepForward();
            var list = indexListPair.Value;
            var index = indexListPair.Key;

            var width = pe.ClipRectangle.Width;
            var height = pe.ClipRectangle.Height;
            
            foreach(DisparityValuePair dvp in list)
            {
                Color color = DotColor(dvp.Value, length);
                Console.WriteLine(color.ToHex());
            }
        }
    }
}
