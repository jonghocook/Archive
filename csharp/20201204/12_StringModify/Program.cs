using System;
using static System.Console;

namespace StringModify {
    class MainApp {
        static void Main(string[] args) {
            WriteLine("\"ABC\" ToLower() : '{0}'\n", "ABC".ToLower());
            WriteLine("\"abc\" ToLower() : '{0}'\n", "abc".ToUpper());

            WriteLine("Insert() : '{0}'\n", "Happy Friday!".Insert(5, " Sunny"));
            WriteLine("remove() : '{0}'\n", "I don't love you.".Remove(2, 6));

            WriteLine("Trim() : '{0}'\n", " No Space ".Trim());
            WriteLine("TrimStart() : '{0}'\n", " No Spaces ".TrimStart());
            WriteLine("TrimEnd() : '{0}'\n", " No Space ".TrimEnd());
        }
    }
}