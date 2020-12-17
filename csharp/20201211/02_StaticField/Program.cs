using System;
using static System.Console;

namespace StaticField {
    class Global {
        public static int Count = 0;
    }
    class ClassA {
        public ClassA() {
            Global.Count++;
        }
    }
    class ClassB {
        public ClassB() {
            Global.Count++;
        }
    }
}

class MainApp {
    static void Main(string[] args) {
        WriteLine($"Global.Count : {StaticField.Global.Count}");
        new StaticField.ClassA();
        new StaticField.ClassA();
        new StaticField.ClassB();
        new StaticField.ClassB();
        
        WriteLine($"Global.Count : {StaticField.Global.Count}");
    }
}