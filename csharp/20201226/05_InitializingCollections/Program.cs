using System;
using System.Collections;
using static System.Console;

namespace InitializingCollections {
    class MainApp {
        static void Main(string[] args) {
            int[] arr = {123, 456, 789};

            ArrayList list = new ArrayList(arr);
            Write("ArrayList : ");
            foreach(object item in list) Write($"{item} | ");
            WriteLine();

            Stack stack = new Stack(arr);
            Write("Stack : ");
            foreach(object item in stack) Write($"{item} | ");
            WriteLine();

            Queue que = new Queue(arr);
            Write("Queue : ");
            foreach(object item in que) Write($"{item} | ");
            WriteLine();

            ArrayList array2 = new ArrayList() {11, 22, 33};
            Write("ArrayList2 : ");
            foreach(object item in array2) Write($"{item} | ");
            WriteLine();
        }
    }
}