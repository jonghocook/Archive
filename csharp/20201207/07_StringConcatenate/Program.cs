using System;
using static System.Console;

namespace StringConcatenate {
    class MainApp {
        static void Main(string[] args) {
            string result = "123" + "456\n";
            WriteLine(result);

            result = "Hello" + " " + "World!";
            WriteLine(result);
        }
    }
}