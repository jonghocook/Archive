using System;
using static System.Console;

namespace IncDecOperator {
    class MainApp {
        static void Main(string[] args) {
            int a = 10;
            WriteLine(a++);
            WriteLine(++a);
            WriteLine();
            WriteLine(a--);
            WriteLine(--a);
        }
    }
}