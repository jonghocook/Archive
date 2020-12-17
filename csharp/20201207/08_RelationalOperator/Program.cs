using System;
using static System.Console;

namespace RelationalOperator {
    class MainApp {
        static void Main(string[] args) {
            WriteLine($"3 > 4 : {3 > 4}");
            WriteLine($"3 >= 4 : {3 >= 4}");
            WriteLine($"3 < 4 : {3<4}");
            WriteLine($"3 <= 4 :  {(3<=4 ? "3은 4이하였나..":"3은 4 미만이다")}");
            WriteLine($"3 == 4 : {3 == 4}");
            WriteLine($"3 != 4 : {(3!=4 ? "맞아요!":"아닌데요")}");
        }
    }
}