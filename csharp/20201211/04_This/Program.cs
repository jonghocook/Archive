using System;
using static System.Console;

namespace This {
    class Employee {
        private string _name;
        private string _position;
        public void SetName(string name) {
            this._name = name;
        }
        public string GetName() {
            return _name;
        }
        public void SetPosition(string position) {
            this._position = position;
        }
        public string GetPosition() {
            return this._position;
        }
    }
    class MainApp {
        static void Main(string[] args) {
            Employee pooh = new Employee();
            pooh.SetName("Pooh");
            pooh.SetPosition("Waiter");
            WriteLine($"{pooh.GetName()} {pooh.GetPosition()}");

            Employee tigger = new Employee();
            tigger.SetName("Tigger");
            tigger.SetPosition("Cleaner");
            WriteLine($"{tigger.GetName()} {tigger.GetPosition()}");
        }
    }
}