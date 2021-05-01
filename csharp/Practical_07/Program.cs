using System;
using System.Collections.Generic;

namespace Practical_07 {
    class MainApp {
        static void Main(string[] args) {
            var score = 25;
            //var langs = new string[] { "C#", "VB", "C++", };
            //var nums = new List<int> { 10, 20, 30, 40, };
            /*
            var dict = new Dictionary<string, string>() {
                ["ko"] = "Korean",
                ["en"] = "English",
                ["es"] = "Espanol",
                ["de"] = "Deutsch"
            };
            */
            var person = new Person {
                Name = "홍길동",
                Birthday = new DateTime(1995, 11, 23),
                PhoneNumber = "012-3456-7890"
            };
            person.speakPerson();
            doElseIf(score);
        }

        static void doElseIf(int num) {
            if(num > 80) {
                Console.WriteLine("A");
            }
            else if(num > 60) {
                Console.WriteLine("B");
            }
            else if(num > 40) {
                Console.WriteLine("C");
            }
            else {
                Console.WriteLine("D");
            }
        }
    }

    public class Person {
        public string Name { get; set; }
        public DateTime Birthday { get; set; }
        public string PhoneNumber { get; set; }
        public void speakPerson() {
            Console.WriteLine($"{Name} {Birthday} {PhoneNumber}");
        }
    }
}