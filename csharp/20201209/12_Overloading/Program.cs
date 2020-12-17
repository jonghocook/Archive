using System;
using static System.Console;

namespace Overloading {
    class MainApp {
        static int Plus(int a, int b) {
            Write("Calling int Plus(int, int) ");
            return a + b;
        }
        static int Plus(int a, int b, int c) {
            Write("Calling int Plus(int, int, int) ");
            return a + b + c;
        }
        static double Plus(double a, double b) {
            Write("Calling int Plus(double, double) ");
            return a + b;
        }
        static double Plus(int a, double b) {
            Write("Calling int Plus(int, double) ");
            return (double)a + b;
        }
        static void Main(string[] args) {
            WriteLine($"= {Plus(1, 2)}");
            WriteLine($"= {Plus(1, 2, 3)}");
            WriteLine($"= {Plus(1.0, 2.4)}");
            WriteLine($"= {Plus(1, 2.4)}");
        }
    }
}