using System;
using System.Collections.Generic;
using Eto.Forms;
using Eto.Drawing;
using Eto.Serialization.Xaml;

namespace sorting_visualiser
{	
	public class MainForm : Form
	{	
		public MainForm()
		{
            XamlReader.Load(this);
            var lvAlgos = new ListBox();
            var items = lvAlgos.Items;
            items.Add("Bubblesort");
            items.Add("Quicksort");
            Content = lvAlgos;
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
