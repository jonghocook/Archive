using System;
using static System.Console;

namespace FloatToIntegral {
    class MainApp {
        static void Main(string[] args) {
            float a = 0.9f;
            int b = (int)a;
            WriteLine(b);

            float c = 1.1f;
            int d = (int)c;
            WriteLine(d);
        }
    }
}