using System;

namespace Char
{
    class MainApp
    {
        static void Main(string[] args)
        {
            charExercise exercise = new charExercise();
            string d = _rest();

            float a = 3.1425_9265_3589_7932_3846_2643_3832_79f;
            double b = 3.1425_9265_3589_7932_3846_2643_3832_79;
            decimal c = 3.1425_9265_3589_7932_3846_2643_3832_79m;

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine(d);

            exercise.printString();
            exercise.printBoolType();
        }

        static string _rest()
        {
            string a = "안녕하세요?";
            string b = "국종호입니다!\n";

            return a + b;
            
        }
    }

    class charExercise
    {
        public void printString()
        {
            char a = '안';
            char b = '녕';
            char c = '하';
            char d = '세';
            char e = '요';

            Console.Write(a);
            Console.Write(b);
            Console.Write(c);
            Console.Write(d);
            Console.Write(e);
            Console.WriteLine();
        }

        public void printBoolType()
        {
            bool a = true;
            bool b = false;

            Console.WriteLine(a);
            Console.WriteLine(b);
        }
    }
}