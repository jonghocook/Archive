using System;
using static System.Console;

namespace PartialClass {
    partial class MyClass {
        public void Method1() {
            WriteLine("Method_1()");
        }
        public void Method2() {
            WriteLine("Method_2()");
        }
    }

    partial class MyClass {
        public void Method3() {
            WriteLine("Method_3()");
        }
        public void Method4() {
            WriteLine("Method_4()");
        }
    }

    class MainApp {
        static void Main(string[] args) {
            MyClass obj = new MyClass();
            obj.Method1();
            obj.Method2();
            obj.Method3();
            obj.Method4();
        }
    }
}