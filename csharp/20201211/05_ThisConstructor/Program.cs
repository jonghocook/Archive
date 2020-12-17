using System;
using static System.Console;

namespace ThisConstructor {
    class MyClass {
        int a, b, c;
        public MyClass() {
            this.a = 5425;
            WriteLine("MyClass()");
        }
        public MyClass(int b) : this() {
            this.b = b;
            WriteLine($"MyClass({b})");
        }
        public MyClass(int b, int c) : this(b) {
            this.c = c;
            WriteLine($"MyClass({b}, {c})");
        }
        public void PrintField() {
            WriteLine($"a : {a}, b : {b}, c : {c}");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            MyClass a = new MyClass();
            a.PrintField();
            WriteLine();
            MyClass b = new MyClass(1);
            b.PrintField();
            WriteLine();
            MyClass c = new MyClass(10, 20);
            c.PrintField();
        }
    }
}