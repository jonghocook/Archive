using System;

namespace _07_Return
{
    class Program
    {
        static int Fibonacci(int n) {
            if(n < 2) return n;
            else return Fibonacci(n - 1) + Fibonacci(n -2);
        }
        static void PrintProfile(string name, string phone) {
            if(name == "") {
                Console.WriteLine("Enter your name.");
                return;
            }
            Console.WriteLine($"Name: {name}, Phone: {phone}");
        }
        static void Main(string[] args)
        {
            Console.WriteLine($"10st Fibonacci number: {Fibonacci(10)}");

            PrintProfile("", "123-4567");
            PrintProfile("Jongho", "456-1234");
        }
    }
}
