using System;
using System.Collections.Generic;
using Eto.Forms;
using Eto.Drawing;
using Eto.Serialization.Xaml;

namespace sorting_visualiser
{    
    public class MainForm : Form
    {
        //a dictionary for reverse lookup of algorithm implementations from their name
        private Dictionary<string, Algorithm> AlgorithmDictionary = new Dictionary<string, Algorithm>();

        public MainForm()
        {
            XamlReader.Load(this);
            var lb = LoadAlgorithmsList();
            Content = lb;
        }

        protected void LoadAlgorithms()
        {
            //create algorithms
            //TODO -- replace these with actual implementations
            var bs = new Algorithm("BubbleSort");
            var qs = new Algorithm("QuickSort");

            //add them to the dictionary
            AlgorithmDictionary[bs.Name] = bs;
            AlgorithmDictionary[qs.Name] = qs;
        }

        protected ListBox LoadAlgorithmsList()
        {
            // initiates listbox full of algorithms
            // ListBox stores strings, so AlgorithmDictionary will be used to lookup the implementations

            var lbAlgorithms = new ListBox();
            LoadAlgorithms();

            foreach (KeyValuePair<string, Algorithm> entry in AlgorithmDictionary)
            {
                lbAlgorithms.Items.Add(entry.Key);
            }

            return lbAlgorithms;
        }

        protected void HandleClickMe(object sender, EventArgs e)
        {
            MessageBox.Show("I was clicked!");
        }

        protected void HandleAbout(object sender, EventArgs e)
        {
            new AboutDialog().ShowDialog(this);
        }

        protected void HandleQuit(object sender, EventArgs e)
        {
            Application.Instance.Quit();
        }
    }
}
