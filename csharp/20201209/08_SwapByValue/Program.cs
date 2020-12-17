using System;

namespace SwapByValue {
    class MainApp {
        public static void Swap(int a, int b) {
            int temp = b;
            b = a;
            a = temp;
        }
        static void Main(string[] args) {
            int x = 3;
            int y = 4;
            Console.WriteLine($"X: {x}, Y: {y}");
            Swap(x, y);
            Console.WriteLine($"X: {x}, Y: {y}");
        }
    }
}