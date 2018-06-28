using System;
using System.Collections;
using System.Collections.Generic;
namespace RhodesSort.Visualiser
{
    public class CachingList : IList<Int32>
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

        private List<Int32> hiddenList;
        public List<Movement> Cache = new List<Movement>(); // this should be private later on, but useful for debugging at the moment

        public virtual Int32 this[int index]
        {
            get { Cache.Add(new Movement(index, -1)); return hiddenList[index]; }
            set { Cache.Add(new Movement(index, value)); hiddenList[index] = value; }
        }


        public CachingList(int n) : base()
        {
            hiddenList = new List<Int32>();

            for (int i = 0; i < n; i++)
                hiddenList.Add(i);
        }

        public int GetVal(int i)
        {
            // return without caching
            // TODO check this actually happens - may play up due to DP
            return hiddenList[i];
        }


        /*
         * WARNING
         * 
         * the following methods are implemented to implement IList
         * they may or may not mess with caching
         * 
         */

        public bool Remove(int index)
        {
            return hiddenList.Remove(index);
        }

        public int Count
        {
            get { return hiddenList.Count; }
        }

        public void Add(Int32 value)
        {
            hiddenList.Add(value);
        }

        public void Clear()
        {
            Cache.Clear();
            hiddenList.Clear();
        }

        public bool IsReadOnly
        {
            get { return false; }
        }

        public void RemoveAt(int index)
        {
            hiddenList.RemoveAt(index);
        }

        public void Insert(int x, int y)
        {
            hiddenList.Insert(x, y);
        }

        public int IndexOf(int item)
        {
            return ((IList<int>)hiddenList).IndexOf(item);
        }

        public bool Contains(int item)
        {
            return ((IList<int>)hiddenList).Contains(item);
        }

        public void CopyTo(int[] array, int arrayIndex)
        {
            ((IList<int>)hiddenList).CopyTo(array, arrayIndex);
        }

        IEnumerator<int> IEnumerable<int>.GetEnumerator()
        {
            return ((IList<int>)hiddenList).GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return ((IList<int>)hiddenList).GetEnumerator();
        }
    }
}
