using System;
using static System.Console;

namespace ArithmaticOperators {
    class MainApp {
        static void Main(string[] args) {
            int a = 111 + 222;
            WriteLine($"a : {a, 10:D}");

            int b = a - 100;
            WriteLine($"b : {b, 11:D}");

            int c = b * 10;
            WriteLine($"c : {c, 12:F1}");

            double d = c /6.3;
            WriteLine($"d : {d, 13:F2}");

            WriteLine($"22 / 7 = {22 / 7, -14:E2}({22%7})");
        }
    }
}