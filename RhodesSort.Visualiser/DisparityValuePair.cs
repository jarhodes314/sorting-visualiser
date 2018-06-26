using System;
namespace RhodesSort.Visualiser
{
    public struct DisparityValuePair
    {
        public int Disparity, Value;

        public DisparityValuePair(int d, int v)
        {
            Disparity = d;
            Value = v;
        }
    }
}
