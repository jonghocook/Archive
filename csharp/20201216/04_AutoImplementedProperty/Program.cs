using System;

namespace AutoImplementedProperty {
    class BirthDayInfo
    {
        public string Name {get; set;} = "Unknown";
        public DateTime Birthday {get; set;} = new DateTime(1, 1, 1);
        public int Age
        {
            get
            {
                return new DateTime(DateTime.Now.Subtract(Birthday).Ticks).Year;
            }
        }
    }
    class MainApp
    {
        static void Main(string[] args)
        {
            BirthDayInfo birth = new BirthDayInfo();
            Console.WriteLine($"Name : {birth.Name}");
            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
            Console.WriteLine($"Age : {birth.Age}");

            birth.Name = "SeoHyun";
            birth.Birthday = new DateTime(1991, 6, 28);

            Console.WriteLine($"Name : {birth.Name}");
            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
            Console.WriteLine($"Age : {birth.Age}");
        }
    }
}