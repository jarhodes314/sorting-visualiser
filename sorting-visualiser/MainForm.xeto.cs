using System;
using System.Collections.Generic;
using Eto.Forms;
using Eto.Drawing;
using Eto.Serialization.Xaml;
using RhodesSort.Algorithms;

namespace RhodesSort.Visualiser
{
    public class MainForm : Form
    {
        private readonly ListBox lb;
        private SortingAlgorithm instance;

        //a dictionary for reverse lookup of algorithm implementations from their name
        private Dictionary<string, SortingAlgorithm> AlgorithmDictionary = new Dictionary<string, SortingAlgorithm>();

        public MainForm()
        {
            XamlReader.Load(this);
            lb = LoadAlgorithmsList();
            lb.SelectedIndexChanged += lb_SelectedIndexChanged;
            var splitter = new Splitter();  // a vertical split between the listbox and graphics panel
            splitter.Position = 200;

            Drawable drawable = new Drawable();
            var i = 0;
            drawable.Paint += (sender, e) =>
            {
                // the refresh method that will draw the thing

                if (i == 0)
                {
                    e.Graphics.Flush();
                    e.Graphics.DrawLine(Colors.Blue, PointF.Empty, new PointF(222, 222));
                    i = 1;
                }
                else
                {
                    e.Graphics.Flush();
                    e.Graphics.DrawLine(Colors.Blue, PointF.Empty, new PointF(222, 2222));
                    i = 2;
                }
            };

            splitter.Panel1 = lb;
            splitter.Panel2 = drawable;

            Content = splitter;
        }

        protected void LoadAlgorithms()
        {
            //create algorithms
            //TODO -- replace these with actual implementations
            //var bs = new SortingAlgorithm<Int32>("BubbleSort");
            SortingAlgorithm bs = new BubbleSort();
            AlgorithmDictionary["Bubble sort"] = bs;
            //AlgorithmDictionary[qs.Name] = qs;
        }

        protected ListBox LoadAlgorithmsList()
        {
            // initiates listbox full of algorithms
            // ListBox stores strings, so AlgorithmDictionary will be used to lookup the implementations

            var lbAlgorithms = new ListBox();
            LoadAlgorithms();

            foreach (KeyValuePair<string, SortingAlgorithm> entry in AlgorithmDictionary)
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

        public void lb_SelectedIndexChanged(object sender, System.EventArgs e)
        {
            Eto.Forms.MessageBox.Show(lb.SelectedKey.ToString(), Eto.Forms.MessageBoxButtons.OK);
        }
    }
}
