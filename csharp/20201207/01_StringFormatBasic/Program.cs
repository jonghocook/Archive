using System;
using static System.Console;

namespace StringFormatBasic {
    class MainApp {
        static void Main(string[] args) {
            string fmt = "{0, -20}{1, -15}{2, 30}\n";

            WriteLine(fmt, "publisher", "Author", "Title");
            WriteLine(fmt, "Marvel", "Stan Lee", "Iron Man");
            WriteLine(fmt, "Hanbit", "Sanghyun Park", "C# 7.0 Programming");
            WriteLine(fmt, "Prentice Hall", "K&R", "The C Programming Language");
        }
    }
}