using System;
using static System.Console;

namespace Throw {
    class MainApp {
        static void DoSomething(int arg) {
            if(arg < 10) Write($"arg : {arg} | ");
            else throw new Exception("\narg가 10보다 큽니다.");
        }
        static void Main(string[] args) {
            try {
                for(int i=0; i<13; i++) {
                    DoSomething(i);
                }
            }
            catch(Exception e) {
                WriteLine(e.Message);
            }
        }
    }
}