using System;
namespace sorting_visualiser
{
    public class DisparityCachedList
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

        public struct DisparityValuePair
        {
            int Disparity, Value;

            private DisparityValuePair(int d, int v){
                Disparity = d;
                Value = v;
            }
        }

        public DisparityCachedList()
        {
        }
    }
}
