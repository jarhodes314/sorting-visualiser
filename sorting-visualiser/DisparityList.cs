using System;
using System.Collections.Generic;
namespace sorting_visualiser
{
    public class DisparityList : List<Int32>
    {
        /* a class that overrides get and set
         * for list to calculate disparity
         * and cache operations based on an
         * int list from 0 to n-1 
         */

        public struct Movement
        {
            public int i;
            public bool set; // whether the move is get or get

            private Movement(int x, bool s)
            {
                i = x;
                set = s;
            }
        }

        List<Movement> cache = new List<Movement>();

        public DisparityList(int n) : base()
        {
            for (int i = 0; i < n; i++)
                this.Add(i);
        }

        private int CalculateDisparity(int i)
        {
            return ((this[i] - i) % i); 
        }
    }
}
