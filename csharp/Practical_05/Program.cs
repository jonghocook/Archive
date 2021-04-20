using System;
using System.Collections.Generic;
using System.Linq;

namespace Practical_05 {
    class MainApp {
        static void Main(string[] args) {
            var numbers = new List<int> { 12, 72, 87, 94, 14, 53, 20, 40, 35, 76, 91, 31, 17, 48 };

            // List<T>의 Exists Method를 사용해 8, 9로 나누어 떨어지는 수가 있는지 조사하고 그 결과를 콘솔에 출력합니다.
            var exists = numbers.Exists(s => s % 8 == 0 && s % 9 == 0);
            Console.WriteLine(exists);
            var find = numbers.Find(s => s % 8 == 0 && s % 9 == 0 );
            Console.WriteLine(find);

            // List<T>의 ForEach Method를 사용해 각 요소를 2.0으로 나눈 값을 콘솔에 출력합니다.
            numbers.ForEach(s => Console.Write($"{(float)(s / 2.0)} | "));

            // Linq의 Where Method를 사용해 값이 50이상인 요소를 열거하고 그 결과를 콘솔에 출력합니다.
            var where = numbers.Where(s => s >= 50).OrderByDescending(s => s);
            Console.WriteLine();
            foreach(var w in where) Console.Write($"{w} | ");


            // Linq의 Select Method를 사용해 값을 2배로 만들고 그 결과를 List<int>에 저장합니다. 그리고 List<int>와 각 요소를 콘솔에 출력합니다.
            var list = numbers.Select(s => s * 2);
            Console.WriteLine();
            foreach(var l in list) Console.Write($"{l} | ");
        }
    }
}