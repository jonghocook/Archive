using System;
using System.Linq;
using static System.Console;

namespace Exercise_02 {
    class Car {
        public int Cost { get; set; }
        public int MaxSpeed { get; set; }
    }

    class MainApp {
        static void Main(string[] args) {
            Car[] arrCars = {
                new Car() { Cost = 56, MaxSpeed = 120 },
                new Car() { Cost = 70, MaxSpeed = 150 },
                new Car() { Cost = 45, MaxSpeed = 180 },
                new Car() { Cost = 32, MaxSpeed = 200 },
                new Car() { Cost = 82, MaxSpeed = 280 }
            };

            var selected = from car in arrCars
            where car.Cost < 60
            orderby car.Cost
            select car;

            WriteLine();
            foreach(var car in selected) {
                WriteLine($"Cost : {car.Cost}, MaxSpeed : {car.MaxSpeed}");
            }
            WriteLine();
        }
    }
}