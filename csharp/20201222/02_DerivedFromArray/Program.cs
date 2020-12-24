using System;
using static System.Console;

namespace DerivedFromArray {
    class MainApp {
        static void Main(string[] args) {
            int[] array = new int[] {10, 30, 20, 7, 1};
            WriteLine($"Type Of array: {array.GetType()}");
            WriteLine($"Bese type Of array: {array.GetType().BaseType}");
        }
    }
}