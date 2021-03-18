using System;

namespace DelegateChains {
    delegate void Notify(string message);   //Delegate

    class Notifier {
        public Notify EventOccured;    //Delegate Instance
    }
    class EventListener {
        private string name;
        public EventListener(string name) {
            this.name = name;
        }
        public void SomethingHappend(string message) {
            Console.WriteLine($"{name}.SomethingHappend: {message}");
        }
    }
    class MainApp{
        static void Main(string[] args) {
            Notifier notifier = new Notifier();
            EventListener listener1 = new EventListener("Listener1");
            EventListener listener2 = new EventListener("Listener2");
            EventListener listener3 = new EventListener("Listener3");

            notifier.EventOccured += listener1.SomethingHappend;
            notifier.EventOccured += listener2.SomethingHappend;
            notifier.EventOccured += listener3.SomethingHappend;
            notifier.EventOccured("You've got mail.");

            Console.WriteLine();
        }
    }
}