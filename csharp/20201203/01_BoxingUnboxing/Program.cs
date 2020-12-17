using System;
using static System.Console;

namespace BoxingUnboxing {
    class MainApp {
        static void Main(string[] args) {
            int a = 123;
            object b = (object)a;
            int c = (int)b;

            WriteLine(a);
            WriteLine(b);
            WriteLine(c);

            double x = 3.1414213;
            object y = x;
            double z = (double)y;

            WriteLine(x);
            WriteLine(y);
            WriteLine(z);
        }
    }
}