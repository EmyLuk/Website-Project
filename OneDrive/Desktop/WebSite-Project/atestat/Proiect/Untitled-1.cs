using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Laborator_12
{
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }

        public string Interactio { get; private set; }

        private void Form4_Load(object sender, EventArgs e)
        {
            int n = int.Parse(Interaction.InputBox("Adaugati numarul de elemente din vector."));
            int[] values = new int[n];
            for(int i =0; i < n; i++)
            {
                values[i] = int.Parse(Interaction.InputBox("Valoare " + i));
            }
            int minim = values[0];
            for(int i=0;i<values.Length;i++)
            {
                if (values[i]< minim)
                {
                    minim = values[i];
                }
                MessageBox.Show("Minimul este " + minim);
            }
        }
    }
}