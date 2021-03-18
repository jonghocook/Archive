using System;
using System.Linq;

namespace Exercise_01 {
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

            var selected = from cars in arrCars
            group cars by cars.Cost >= 50 && cars.MaxSpeed >= 150 into speedCars
            select new {
                Key = speedCars.Key == true ? "[Cost >= 50 && speed >= 150km]" : "[Cost < 50 || speed < 150km]",
                Count = speedCars.Count(),
                speedMax = speedCars.Max(cars => cars.MaxSpeed),
                speedMin = speedCars.Min(cars => cars.MaxSpeed),
                speedAverage = speedCars.Average(cars => cars.MaxSpeed),
                costMax = speedCars.Max(cars => cars.Cost),
                costMin = speedCars.Min(cars => cars.Cost),
                costAverage = speedCars.Average(cars => cars.Cost)
            };

            foreach(var stat in selected) {
                Console.WriteLine($"\n{stat.Key}");
                Console.WriteLine($"수량 : {stat.Count}, 최고속도 : {stat.speedMax}, 최저속도 : {stat.speedMin}, 평균값 : {stat.speedAverage}");
                Console.WriteLine($"최대가격 : {stat.costMax}, 최저가격 : {stat.costMin}, 평균가 : {stat.costAverage}");
            }
            Console.WriteLine();
        }
    }
}