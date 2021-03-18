using System;
using static System.Console;
using System.Collections.Generic;

namespace UsingGenericList {
    class MainApp {
        static void Main(string[] args) {
            List<int> list = new List<int>();
            for(int i=0; i<5; i++) list.Add(i);

            foreach(int e in list) Write($"{e} ");
            WriteLine();

            list.RemoveAt(2);

            foreach(int e in list) Write($"{e} ");
            WriteLine();

            list.Insert(2, 2);

            foreach(int e in list) Write($"{e} ");
            WriteLine();
        }
    }
}