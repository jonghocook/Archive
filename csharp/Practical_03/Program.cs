using System;
using static System.Console;

namespace SalesCalculator {
    class MainApp {
        static void Main(string[] args) {
            var sales = new SalesCounter("sales.csv");
            var amountPerStore = sales.GetPerStoreSales();
            foreach(var obj in amountPerStore) {
                WriteLine($"{obj.Key} {obj.Value}");
            }
        }
    }
}