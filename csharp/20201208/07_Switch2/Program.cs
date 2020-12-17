using System;
using static System.Console;

namespace Switch2 {
    class MainApp {
        static void Main(string[] args) {
            object obj = null;

            string s = ReadLine();
            if(int.TryParse(s, out int out_i)) obj = out_i;
            else if(float.TryParse(s, out float out_f)) obj = out_f;
            else obj = s;

            switch(obj) {
                case int i:
                WriteLine($"{i} is int Type.");
                break;
                case float f:
                WriteLine($"{f} is float type.");
                break;
                default:
                WriteLine($"{obj} is nonetype.");
                break;
            }
        }
    }
}