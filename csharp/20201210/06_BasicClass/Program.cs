using System;

namespace BasicClass{
    class Cat {
        public string name;
        public string color;
        public void Meow() {
            Console.WriteLine($"{name} : Meow!");
        }
    }

    class MainApp {
        static void Main(string[] args) {
            Cat kitty = new Cat();
            kitty.color = "white";
            kitty.name = "Kitty";
            kitty.Meow();
            Console.WriteLine($"{kitty.name} : {kitty.color}");

            Cat nero = new Cat();
            nero.color = "Black";
            nero.name = "Nero";
            nero.Meow();
            Console.WriteLine($"{nero.name} : {nero.color}");
        }
    }
}