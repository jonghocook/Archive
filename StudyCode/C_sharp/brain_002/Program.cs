using System;

namespace BreakApp
{
    class MainApp
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.Write("계속할까요?(예/아니오) : ");
                string answer = Console.ReadLine();

                if (answer == "아니오")
                    goto Jump;
            }

            // Continue -------------------------

            Jump:
            for (int i = 0; i < 10; i++)
            {
                if (i % 2 == 0)
                    continue;
                
                Console.WriteLine("{0} : 홀수", i);
            }
        }
    }
}