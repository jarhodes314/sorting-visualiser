using System;
namespace RhodesSort.Visualiser
{
    public struct DisparityValuePair
    {
        int Disparity, Value;

        public DisparityValuePair(int d, int v)
        {
            Disparity = d;
            Value = v;
        }
    }
}
