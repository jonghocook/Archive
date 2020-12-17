using System;
using static System.Console;

namespace IfElse {
    class MainApp {
        static void Main(string[] args) {
            Write("Enter Number : ");

            //string input = ReadLine();
            int number = Int32.Parse(ReadLine());

            if(number < 0) Write("음수 ");
            else if (number > 0) Write("양수 ");
            else Write("0");

            if(number % 2 == 0) WriteLine("| 짝수");
            else WriteLine("| 홀수");
        }
    }
}