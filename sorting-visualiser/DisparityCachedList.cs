using System;
using System.Collections.Generic;
namespace sorting_visualiser
{
    public class DisparityCachedList : List<DisparityValuePair>
    {
        /* a class to calculate and store the list at every step
         * of the visualisation
         * 
         * the use of the two different lists will make the algorithm
         * easy to implement and the visualisation easy to run
         * 
         * a DisparityList will be converted to a DisparityCachedList
         * once the algorithm has terminated
         */

        private readonly int Length;
        private List<Movement> Cache;

        public DisparityCachedList(CachingList inputList)
        {
            Length = inputList.Count;
            Cache = inputList.Cache;

            for (int i = 0; i < inputList.Count; i++)
            {
                int value = inputList.GetVal(i);
                int disparity = CalculateDisparity(value, i);
                this.Add(new DisparityValuePair(disparity, value));
            }
        }

        public DisparityCachedList StepForward()
        {
            // TODO fill this in
            return this;
        }

        private int CalculateDisparity(int value, int index)
        {
            return ((value - index) % Length);
        }
    }
}
