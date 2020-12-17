using System;
using static System.Console;

namespace AnonymousType
{
    class MainApp
    {
        static void Main(string[] args)
        {
            var a = new { Name = "국종호", Age = 36 };
            Console.WriteLine($"Name: {a.Name}, Age: {a.Age}");

            var b = new { Subject = "수학", Scores = new int[] {90, 80, 70, 60}};
            Console.Write($"Subject: {b.Subject}, Scores: ");
            foreach(var score in b.Scores) Console.Write($"{score} | ");
            Console.WriteLine();
        }
    }
}