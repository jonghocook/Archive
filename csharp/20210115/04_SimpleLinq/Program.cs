using System;
//using System.Collections.Generic;
using System.Linq;

namespace SimpleLinq {
    class Profile {
        public string name {get; set;}
        public int Height {get; set;}
    }

    class MainApp {
        static void Main(string[] args) {
            Profile[] arrProfile = {
                new Profile() {name="정우성", Height=186},
                new Profile() {name="김태희", Height=158},
                new Profile() {name="고현정", Height=172},
                new Profile() {name="이문세", Height=178},
                new Profile() {name="하하", Height=171}
            };

            var profiles = from profile in arrProfile
            where profile.Height < 175
            orderby profile.Height
            select new {Name = profile.name, InchHeight = profile.Height * 0.393};
            
            foreach(var profile in profiles)
                Console.WriteLine($"{profile.Name}, {profile.InchHeight}");
        }
    }
}