using System;

namespace Break{
    class MainApp {
        static void Main(string[] args) {
            while(true) {
                Console.Write("Continue(Yes or No) : ");
                string answer = Console.ReadLine();
                if(answer.ToLower() == "no") break;
            }
        }
    }
}