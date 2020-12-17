using System;
using static System.Console;

namespace Enum {
    class MainApp {

        enum DialogResult {YES=2, NO, CANCEL, CONFIRM, OK}
        static void Main(string[] args) {
            WriteLine((int)DialogResult.YES);
            WriteLine((int)DialogResult.NO);
            WriteLine((int)DialogResult.CANCEL);
            WriteLine((int)DialogResult.CONFIRM);
            WriteLine((int)DialogResult.OK);
        }
    }
}