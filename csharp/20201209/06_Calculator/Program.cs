using System;

namespace Method {
    class Calculator {
        public static int Plus(int a, int b) {
            return a + b;
        }
        public static int minus(int a, int b) {
            return a - b;
        }
    }
    class MainApp {
        static void Main(string[] args) {
            int result = Calculator.Plus(3, 4);
            Console.WriteLine(result);
            Console.WriteLine(Calculator.minus(result, 2));
        }
    }
}