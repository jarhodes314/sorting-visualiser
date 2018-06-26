using System;
namespace RhodesSort.Visualiser
{
    public struct Movement
    {
        public int index; // index of the get/set
        public int value; // new value if set - if get -> -1

        public Movement(int x, int v)
        {
            index = x;
            value = v;
        }
    }
}
