using System;
using static System.Console;

namespace NamedParameter {
    class MainApp {
        static void PrintProfile(string name, string phone) {
            WriteLine($"Name: {name}, Phone: {phone}");
        }
        static void Main(string[] args) {
            PrintProfile(name: "박찬호", phone: "010-1234-5678");
            PrintProfile(phone: "010-9876-3456", name: "김병헌");
            PrintProfile("박세리", "010-1222-2222");
            PrintProfile("Jongho", phone:"010-2222-4555");
        }
    }
}