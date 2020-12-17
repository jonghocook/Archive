using System;
using static System.Console;

namespace TypeCasting {
    class Mammal {
        public void Nurse() {
            WriteLine("Nurse()");
        }
    }
    class Dog : Mammal {
        public void Bark() {
            WriteLine("Bark()");
        }
    }
    class Cat : Mammal {
        public void Meow() {
            WriteLine("Meow()");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            Mammal mal = new Dog();
            Dog dog;

            if(mal is Dog) {
                dog = (Dog)mal;
                dog.Bark();
            }

            Mammal mal2 = new Cat();
            Cat cat = mal2 as Cat;
            if(cat != null) cat.Meow();

            Cat cat2 = mal as Cat;
            if(cat2 != null) cat2.Meow();
            else WriteLine("Cat2 is not a Cat.");
        }
    }
}