using System;
using System.Collections.Generic;
namespace sorting_visualiser
{
    public class CachingList : List<Int32>
    {
        /* a class that overrides get and set
         * for list to cache operations based on an
         * int list from 0 to n-1 
         * 
         * this can (will) be interacted with like a normal list
         * (in theory, not yet implemented) and will cache
         * operations as necessary (storing gets will help
         * jazz up the visualisations at the end
         */

        public new Int32 this[int index]
        {
            get { Cache.Add(new Movement(index, -1)); return index; }
            set { Cache.Add(new Movement(index, value)); base[index] = value; }
        }

        public List<Movement> Cache = new List<Movement>();

        public CachingList(int n) : base()
        {
            for (int i = 0; i < n; i++)
                this.Add(i);
        }

        public int GetVal(int i)
        {
            // return without caching
            // TODO check this actually happens - may play up due to DP
            return base[i];
        }
    }
}
