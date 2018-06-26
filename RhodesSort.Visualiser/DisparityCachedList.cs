using System;
using System.Collections.Generic;
namespace RhodesSort.Visualiser
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

        public KeyValuePair<Int32, DisparityCachedList> StepForward()
        {

            var index = -1; // index is for a get, -1 if set
                            // NB this is opposite to before
            if (Cache.Count != 0)
            {
                var thisMove = Cache[0];
                Cache.RemoveAt(0);

                if (thisMove.value < 0)
                {
                    // action is get
                    index = thisMove.index;
                }
                else
                {
                    // action is set
                    var newDisparity = CalculateDisparity(thisMove.value, thisMove.index);
                    this[thisMove.index] = new DisparityValuePair(newDisparity, thisMove.value);
                }
            }

            return new KeyValuePair<int, DisparityCachedList>(index,this);
        }

        int CalculateDisparity(int value, int index)
        {
            int max = Math.Max(value, index);
            int min = Math.Min(value, index);
            int disparity;

            if (max - min > Length / 2)
                disparity = min + Length - max;
            else
                disparity = max - min;

            return disparity;
        }
    }
}
