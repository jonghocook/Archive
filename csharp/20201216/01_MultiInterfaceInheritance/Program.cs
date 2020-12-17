using System;
using static System.Console;

namespace MultiInterfaceInheritance {
    interface IRunnable {
        void Run();
    }
    interface IFlyable {
        void Fly();
    }
    class FlyingCar : IRunnable, IFlyable {
        public void Run() {
            WriteLine("Run!");
        }
        public void Fly() {
            WriteLine("Fly!");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            FlyingCar car = new FlyingCar();
            car.Run();
            car.Fly();

            IRunnable runable = car as IRunnable;
            runable.Run();

            IFlyable flyable = car as IFlyable;
            flyable.Fly();
        }
    }
}