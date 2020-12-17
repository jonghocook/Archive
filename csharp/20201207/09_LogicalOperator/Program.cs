using System;
using static System.Console;

namespace LogicalOperator {
    class MainApp {
        static void Main(string[] args) {
            WriteLine("\n[==== Testing ====]");
            WriteLine($"1>0 && 4<5 : {1>0 && 4<5}");
            WriteLine($"1>0 && 4>5 : {1>0 && 4>5}");
            WriteLine($"1==0 && 4>5 : {1==0 && 4>5}");
            WriteLine($"1==0 && 4<5 : {1==0 && 4<5}");

            WriteLine("\n[==== Testing ====]");
            WriteLine($"1>0 || 4<5 : {1>0 || 4<5}");
            WriteLine($"1>0 || 4>5 : {1>0 || 4>5}");
            WriteLine($"1==0 || 4>5 : {1==0 || 4>5}");
            WriteLine($"1==0 || 4<5 : {1==0 || 4<5}");
        }
    }
}