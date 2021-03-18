using System;
using System.Collections;
using static System.Console;

namespace UsingHashTable {
    class MainApp {
        static void Main(string[] args) {
            Hashtable ht = new Hashtable();
            ht["하나"] = "one";
            ht["둘"] = "two";
            ht["셋"] = "three";
            ht["넷"] = "four";
            ht["다섯"] = "five";

            WriteLine(ht["하나"]);
            WriteLine(ht["둘"]);
            WriteLine($"셋은 {ht["셋"]}");
            WriteLine($"넷은 {ht["넷"]}");
            WriteLine(ht["다섯"]);
        }
    }
}