using System;
using static System.Console;

namespace StringSearch {
    class MainApp {
        static void Main(string[] args) {
            string greeting = "Good Morning";
            WriteLine("{0}\n", greeting);

            //indexOf()
            WriteLine("IndexOf 'Good': {0}", greeting.IndexOf("Good"));
            WriteLine("IndexOf 'o': {0}", greeting.IndexOf('o'));

            //lastIndexOf()
            WriteLine("LastIndexOf 'Good': {0}", greeting.LastIndexOf("Good"));
            WriteLine("LastIndexOf '0' : {0}", greeting.LastIndexOf('o'));

            //StartsWith()
            WriteLine("StartsWith 'Good': {0}", greeting.StartsWith("Good"));
            WriteLine("StartsWith '0' : {0}", greeting.StartsWith('o'));

            //EndsWith()
            WriteLine("EndsWith 'Good': {0}", greeting.EndsWith("Good"));
            WriteLine("EndsWith '0' : {0}", greeting.EndsWith('o'));

            //Contains()
            WriteLine("Contains 'Good': {0}", greeting.Contains("Good"));
            WriteLine("Contains '0' : {0}", greeting.Contains('o'));

            //Replace()
            WriteLine("Replace 'Morning' with 'Evening': {0}", greeting.Replace("Morning", "Evening"));
        }
    }
}