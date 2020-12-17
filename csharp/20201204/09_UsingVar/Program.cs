using System;
using static System.Console;

namespace UsingVar {
    class MainApp {
        static void Main(string[] args) {
            var a = 20;
            WriteLine("Type: {0}, Value: {1}", a.GetType(), a);

            var b = 3.1414213;
            WriteLine("Type: {0}, Value: {1}", b.GetType(), b);

            var c = "Hello, World";
            WriteLine("Type: {0}, Value: {1}", c.GetType(), c);

            var d = new int[] {10, 20, 30};
            WriteLine("Type: {0}, Value: {1}", d.GetType(), d[0]);
            WriteLine();
            foreach(var e in d) WriteLine("\"d\"Value: {0}", e);
        }
    }
}