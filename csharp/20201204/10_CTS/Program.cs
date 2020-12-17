using System;

namespace _10_CTS
{
    class MainApp
    {
        static void Main(string[] args)
        {
            System.Int32 a = 123;
            int b = 456;
            Console.WriteLine("a type: {0}, value: {1}", a.GetType().ToString(), a);
            Console.WriteLine("a type: {0}, value: {1}", b.GetType(), b);

            System.String c = "abc";
            string d = "def";
            Console.WriteLine("a type: {0}, value: {1}", c.GetType().ToString(), c);
            Console.WriteLine("a type: {0}, value: {1}", d.GetType(), d);
        }
    }
}
