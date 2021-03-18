using System;

namespace Delegate {
    delegate int MyDelegate(int a, int b);  //대리자 선언
    class Calculator {
        public int Plus(int a, int b) {
            return a + b;
        }
        public int Minus(int a, int b) {
            return a - b;
        }
    }
    class MainApp {
        static void Main(string[] args) {
            Calculator cal = new Calculator();
            MyDelegate callback = new MyDelegate(cal.Plus);
            Console.WriteLine(callback(3, 4));

            callback = new MyDelegate(cal.Minus);
            Console.WriteLine(callback(7, 5));
        }
    }
}