using System;
namespace sorting_visualiser
{
    public struct PositionXY
    {
        int x;
        int y;

        public PositionXY(int xval, int yval)
        {
            x = xval;
            y = yval;
        }
    }

    public struct PositionRΘ
    {
        double r;
        double t;

        public PositionRΘ(double rval, double theta)
        {
            r = rval;
            t = theta;
        }
    }
}
