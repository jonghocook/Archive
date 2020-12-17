using System;
using static System.Console;

namespace ConstructorWithProperty
{
    class BirthdayInfo
    {
        public string Name
        {
            get;
            set;
        }
        public DateTime Birthday
        {
            get;
            set;
        }
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
            BirthdayInfo birth = new BirthdayInfo() { Name = "SeoHyun", Birthday = new DateTime(1991, 6, 28) };
            
            WriteLine($"Name : {birth.Name}");
            WriteLine($"Brithday : {birth.Birthday.ToShortDateString()}");
            WriteLine($"Age : {birth.Age}");
        }
    }
}