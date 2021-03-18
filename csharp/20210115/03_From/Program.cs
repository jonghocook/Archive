using System;
using System.Linq;

namespace From {
    class MainApp {
        static void Main(string[] args) {
            int[] numbers = {9, 2, 6, 4, 5, 3, 7, 8, 1, 10};
            Action<int[]> action = (n) => {
                foreach(int i in n)
                    Console.Write($"{i} ");
            };

            var result = from n in numbers
            where n % 2 == 0
            orderby n
            select n;

            action(numbers);
            Console.WriteLine();

            foreach(int n in result)
                Console.Write($"짝수 : {n} | ");
        }
    }
}