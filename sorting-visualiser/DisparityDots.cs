using System;
using Eto.Drawing;
namespace RhodesSort.Visualiser
{
    public class DisparityDots
    {
        private static Color DotColor(int value, int length)
        {
            float angle = 360f * value / length;

            ColorHSB color = new ColorHSB(angle, 0.5f, 0.5f);

            return color.ToColor();
        }
    }
}
