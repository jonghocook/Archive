using System;
using static System.Console;

namespace StringFormatNumber {
    class MainApp {
        static void Main(string[] args) {
            //D:10진수
            WriteLine("10진수: {0:D}", 123);
            string s = string.Format("10진수: {0:D5}\n", 123);
            WriteLine(s);

            WriteLine(string.Format("16진수: {0:X}", 0xFF1234));
            WriteLine("16진수: {0:X8}\n", 0xFF1234);

            WriteLine("숫자: {0:N}", 123456789);
            WriteLine("숫자: {0:N0}\n", 123456789); //자릿수 0은 소수점 아래를 제거함.

            WriteLine("고정소수점: {0:F}", 123.45);
            WriteLine("고정소수점: {0:F5}\n", 123.456);

            WriteLine("공학: {0:E}", 123.456789);
        } 
    }
}