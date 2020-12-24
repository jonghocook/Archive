﻿using System;
using static System.Console;

namespace InitializingArray {
    class MainApp {
        static void Main(string[] args) {
            string[] array1 = new string[3] {"안녕", "Hello", "Halo"};

            WriteLine("Array1...");
            foreach(string greeting in array1) WriteLine($"{greeting}");

            string[] array2 = new string[] {"안녕", "Hello", "Halo"};

            WriteLine("\nArray2...");
            foreach(string greeting in array2) WriteLine($"{greeting}");

            string[] array3 = {"안녕", "Hello", "Halo"};

            WriteLine("\nArray3...");
            foreach(string greeting in array3) WriteLine($"{greeting}");
        }
    }
}