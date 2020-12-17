using System;
using static System.Console;

namespace Overriding {
    class ArmorSuite {
        public virtual void Initialize() {
            WriteLine("Armored");
        }
    }
    class IronMan : ArmorSuite {
    public override void Initialize() {
        base.Initialize();
        WriteLine("Repulor Rays Armed");
    }
    }
    class WarMachine : ArmorSuite {
    public override void Initialize()
    {
      //base.Initialize();
      WriteLine("Double-Barrel Connons Armed");
      WriteLine("Micro-Rocket Launcher Armed");
    }
    }
    class MainApp {
        static void Main(string[] args) {
            WriteLine("Creating ArmorSuite...");
            ArmorSuite armorsuite = new ArmorSuite();
            armorsuite.Initialize();

            WriteLine("\nCreating IronMan...");
            IronMan ironMan = new IronMan();
            ironMan.Initialize();

            WriteLine("\nCreating WarMachine...");
            WarMachine warMachine = new WarMachine();
            warMachine.Initialize();
        }
    }
}