using System;

namespace Exercise_02 {
    class MainApp {
        static void Main(string[] args) {
            int[] array = {11, 22, 33, 44, 55};

            //Action<int> action = (x) => Console.Write($"{x * x} ");
            //foreach(int a in array) {
            //    action(a);
            //}
            //Console.WriteLine();
            
            Action<int[]> action2 = (array) => {
                foreach(int a in array) {
                    Console.Write($"{a * a} ");
                }
            };
            action2(array);
        }
    }
}