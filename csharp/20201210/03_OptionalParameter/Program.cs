using System;
using static System.Console;

namespace OptionalParameter {
    class MainApp {
        static void PrintProfile(string name, string phone = "") {
            WriteLine($"Name: {name}, Phone: {phone}");
        }
        static void Main(string[] args) {
            PrintProfile("태연");
            PrintProfile("Yoona", "010-234-2345");
            PrintProfile(name: "Yoori");
            PrintProfile(name: "Seoyun", phone: "010-3445-7890");
        }
    }
}