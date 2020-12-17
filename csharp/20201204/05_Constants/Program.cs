using System;
using static System.Console;

namespace Constants {
    class MainApp {
        static void Main(string[] args) {
            const int MAX_INT = 2137483647;
            const int MIN_INT = -2137483648;

            WriteLine(MAX_INT);
            WriteLine(MIN_INT);
        }
    }
}