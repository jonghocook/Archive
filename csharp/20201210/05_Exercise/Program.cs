using System;
using static System.Console;

namespace Exercise05 {
    class MainApp {
        static double Square(double arg) {
            arg *= arg;
            return arg;
        }
        static void Main(string[] args) {
            Write("수를 입력하세요 : ");
            double arg = Convert.ToDouble(Console.ReadLine());

            WriteLine($"input: {arg}, Result: {Square(arg)}");
        }
    }
}