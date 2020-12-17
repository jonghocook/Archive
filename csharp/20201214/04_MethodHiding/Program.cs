using System;
using static System.Console;

namespace MethodHiding {
    class BaseApp {
        public void MyMethod() {
            WriteLine("Base.MyMethod()");
        }
    }
    class Derived : BaseApp {
        public new void MyMethod() {
            WriteLine("Derived.MyMethod()");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            BaseApp baseObj = new BaseApp();
            baseObj.MyMethod();

            Derived derivedObj = new Derived();
            derivedObj.MyMethod();

            BaseApp baseOrDerived = new Derived();
            baseOrDerived.MyMethod();
        }
    }
}