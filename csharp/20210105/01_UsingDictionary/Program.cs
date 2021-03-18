using System;
using static System.Console;
using System.Collections.Generic;

namespace UsingDictionary {
    class MainApp {
        static void Main(string[] args) {
            Dictionary<char, string> dic = new Dictionary<char, string>();

            dic['1'] = "one";
            dic['2'] = "two";
            dic['3'] = "three";
            dic['4'] = "four";
            dic['5'] = "five";

            WriteLine(dic['1']);
            WriteLine(dic['2']);
            WriteLine(dic['3']);
            WriteLine(dic['4']);
            WriteLine(dic['5']);
        }
    }
}