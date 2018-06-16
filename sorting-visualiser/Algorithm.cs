using System;
namespace sorting_visualiser
{
    public class Algorithm
    {
        //TODO make this class abstract
        // it currently isn't to make it easier to test

        public string Name { get; private set; }

        public Algorithm(string name)
        {
            Name = name;
        }

        public override string ToString()
        {
            return name;
        }

    }
}

