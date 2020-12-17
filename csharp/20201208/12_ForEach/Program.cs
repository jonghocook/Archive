using System;
using static System.Console;

namespace ForEeach {
    class MainApp {
        static void Main(string[] args) {
            int[] arr = new int[] {0, 1, 2, 3, 4, 5, 6, 7, 8};

            foreach(int a in arr) Write($" {a} |");
        }
    }
}