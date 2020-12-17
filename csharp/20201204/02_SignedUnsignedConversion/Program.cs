using System;
using static System.Console;

namespace SignedUnsignedConvision {
    class MainApp {
        static void Main(string[] args) {
            int a = 500;
            WriteLine(a);
            uint b = (uint)a;
            WriteLine(b);
            int x = -30;
            WriteLine(x);
            uint y = (uint)x;
            WriteLine(y);
        }
    }
}