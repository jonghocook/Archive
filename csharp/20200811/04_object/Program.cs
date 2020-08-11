using System;

namespace Object
{
    class MainApp
    {
        static void Main(string[] args)
        {
            myClass mc = new myClass();

            object a = 123;
            object b = 3.141592653589793238462643383279m;
            object c = true;
            object d = "Hello!";

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            Console.WriteLine("Hey Guys, {0}\n", d);

            boxingUnboxing();

            mc.IntegralConversion();
        }


        static void boxingUnboxing()
        {
            int a = 123;
            object b = (object)a;
            int c = (int)b;

            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
            
            double x = 3.1415213;
            object y = x;
            double z = (double)y;

            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine(z);
        }
    }

    class myClass
    {
        public void IntegralConversion()
        {
            sbyte a = 127;
            Console.WriteLine(a);

            int b = (int)a;
            Console.WriteLine(b);

            int x = 128;
            Console.WriteLine(x);

            sbyte y = (sbyte)x;
            Console.WriteLine(y);
        }
    }
}