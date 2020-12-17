using System;
using static System.Console;

namespace PropertiesInInterface
{
    interface INamedValue
    {
        string Name
        {
            get;
            set;
        }
        string Value
        {
            get;
            set;
        }
    }
    class NamedValue : INamedValue
    {
        public string Name
        {
            get;
            set;
        }
        public string Value
        {
            get;
            set;
        }
    }
    class MainApp {
        static void Main(string[] args)
        {
            NamedValue name = new NamedValue() { Name = "Name", Value = "Jongho" };
            NamedValue height = new NamedValue() { Name = "Height", Value = "165cm"};
            NamedValue weight = new NamedValue() { Name = "Weight", Value = "60kg" };

            Console.WriteLine($"{name.Name, -6} : {name.Value}");
            Console.WriteLine($"{height.Name, -6} : {height.Value}");
            Console.WriteLine($"{weight.Name, -6} : {weight.Value}");
        }
    }
}