using System;
using static System.Console;

namespace While {
    class MainApp {
        static void Main(string[] args) {
            int i = 10;

            while(i > 0) WriteLine($"i : {i--}");
        }
    }
}