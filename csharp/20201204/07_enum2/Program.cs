using System;
using static System.Console;

namespace Enum2 {
    class MainApp {
        enum DialogResult {YES=10, NO, CANCEL=50, CONFIRM, OK}
        static void Main(string[] args) {
            DialogResult result = DialogResult.YES;

            WriteLine("{0} {1}", result == DialogResult.YES, (int)DialogResult.YES);
            WriteLine("{0} {1}", result == DialogResult.NO, (int)DialogResult.NO);
            WriteLine("{0} {1}", result == DialogResult.CANCEL, (int)DialogResult.CANCEL);
            WriteLine("{0} {1}", result == DialogResult.CONFIRM, (int)DialogResult.CONFIRM);
            WriteLine("{0} {1}", result == DialogResult.OK, (int)DialogResult.OK);
        }
    }
}