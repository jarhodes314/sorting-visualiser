using System;
using System.Collections.Generic;

namespace sorting_visualiser
{
    public class SortingAlgorithm<T> where T : IComparable
    {
        public string Name { get; private set; }
        private Func<List<T>, List<T>> SortFunc;

        public SortingAlgorithm(string name, Func<List<T>, List<T>> sort)
        {
            Name = name;
            SortFunc = sort;
        }

        public override string ToString()
        {
            return Name;
        }

        public List<T> Sort(List<T> list)
        {
            return SortFunc(list);
        }
    }
}

