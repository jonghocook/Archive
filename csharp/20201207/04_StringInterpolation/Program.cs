using System;
using static System.Console;

namespace StringInterpolation {
    class MainApp {
        static void Main(string[] args) {
            string name = "JonghoCoox";
            int age = 30;
            WriteLine($"{name, -15}, {age:D3}");

            name = "Coox";
            age = 26;
            WriteLine($"{name}, {age, -10:F0}");

            name = "Jongho";
            age = 36;
            WriteLine($"{name, 15}는 {(age > 20 ? "성인(이)" : "미성년자")}군요!");
        }
    }
}