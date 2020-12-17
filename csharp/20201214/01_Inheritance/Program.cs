using System;
using static System.Console;

namespace Inheritance {
    class BaseApp {
        protected string _name;
        public BaseApp(string name) {
            this._name = name;
            WriteLine($"{this._name}.BaseApp()");
        }
        ~BaseApp() {
            WriteLine($"{this._name}.~BaseApp()");
        }
        public void BaseMethod() {
            WriteLine($"{_name}.BaseMethod");
        }
    }
    class Derived : BaseApp {
        public Derived(string name) : base(name) {
            WriteLine($"{this._name}.Derived()");
        }
        ~Derived() {
            WriteLine($"{this._name}.~Derived()");
        }
        public void DerivedMethod() {
            WriteLine($"{_name}.DerivedMethod");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            BaseApp a = new BaseApp("a");
            a.BaseMethod();

            Derived b = new Derived("b");
            b.BaseMethod();
            b.DerivedMethod();
        }
    }
}