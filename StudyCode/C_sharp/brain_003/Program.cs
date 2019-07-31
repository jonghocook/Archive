using System;

namespace GotoApp
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Console.Write("종료 조건(숫자)을 입력하세요 : ");

            string str = Console.ReadLine();
            int input = Convert.ToInt32(str);
            //int input = Convert.ToInt32(Console.ReadLine());
            int exit = 0;

            for (int i = 0; i < str.Length; i++)
            {
                for (int j = 0; j < str.Length; j++)
                {
                    for (int k = 0; k < str.Length; k++)
                    {
                        if (exit == input)
                        {
                            goto ExitFor;
                        }

                        Console.WriteLine(exit);
                    }
                }
            }
            goto ExitProgram;

        ExitFor:
            Console.WriteLine("\nExit nested for...");
        ExitProgram:
            Console.WriteLine("\nExit program...\n");
        }
    }
}