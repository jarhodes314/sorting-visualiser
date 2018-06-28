using System;
namespace RhodesSort.Visualiser
{
    public class NoGetCachingList : CachingList
    {
        public override Int32 this[int i]
        {
            get { return this.GetVal(i); }
            set { base[i] = value; }
        }

        public NoGetCachingList(int i) : base(i)
        {
            
        }
    }
}
