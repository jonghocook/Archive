using System;
using static System.Console;

namespace _01_Constructor
{
    class Cat {
        public Cat() {
            name = "";
            color = "";
        }
        public Cat(string _name, string _color) {
            name = _name;
            color = _color;
        }
        ~Cat() {
            WriteLine($"{name}, Bye~");
        }
        public string name;
        public string color;
        public void Meow() {
            WriteLine($"{name} : Meow~");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Cat kitty = new Cat("키티", "하얀색");
            kitty.Meow();
            WriteLine($"{kitty.name} : {kitty.color}");

            Cat nero = new Cat("네로", "검은색");
            nero.Meow();
            WriteLine($"{nero.name} : {nero.color}");
        }
    }
}