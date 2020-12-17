using System;

namespace Property {
    class BirthdayInfo {
        private string _name;
        private DateTime _birthday;
        public string Name {
            get {
                return _name;
            }
            set {
                _name = value;
            }
        }
        public DateTime Birthday {get{return Birthday;} set{_birthday=value;}}
        public int Age {get{return new DateTime(DateTime.Now.Subtract(_birthday).Ticks).Year;}}
    }
    class MainApp {
        static void Main(string[] args) {
            BirthdayInfo birth = new BirthdayInfo();
            birth.Name = "꾸꾸";
            birth.Birthday = new DateTime(2017, 6, 30);

            Console.WriteLine($"Name : {birth.Name}");
            Console.WriteLine($"Birthday : {birth.Birthday.ToShortDateString()}");
            Console.WriteLine($"Age : {birth.Age}");
        }
    }
}