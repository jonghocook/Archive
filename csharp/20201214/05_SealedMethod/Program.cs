using System;
using static System.Console;

namespace SealedMethod {
    class BaseApp {
        public virtual void SealMe() {
            WriteLine("First!");
        }
    }
    class Derived : BaseApp {
        public /*sealed*/ override void SealMe(){
            WriteLine("Second!");
        }
    }
    class WantToOverride : Derived {
        public override void SealMe() {
            WriteLine("Third!");
        }
    }
    class MainApp {
        static void Main(string[] args) {
            WantToOverride want = new WantToOverride();
            want.SealMe();
        }
    }
}