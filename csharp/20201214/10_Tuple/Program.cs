using System;
using static System.Console;

namespace Tuple {
    class MainApp {
        static void Main(string[] args) {
            //Unnamed Tuple
            var a = ("슈퍼맨", 9999);
            WriteLine($"{a.Item1}, {a.Item2}");

            //Named Tuple
            var b = (Name: "Jongho", Age: 18);
            WriteLine($"{b.Name}, {b.Age}");

            //분해
            var (name, age) = b;
            WriteLine($"{name}, {age}");

            b = a;
            WriteLine($"{b.Name}, {b.Age}");
        }
    }
}