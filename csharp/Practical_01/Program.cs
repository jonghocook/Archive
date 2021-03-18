using System;

namespace DistanceConverter {
    class MainApp {
        static void Main(string[] args) {
            if(args.Length >= 1 && args[0] == "-tom")
                PrintFeetToMeterList(1, 10);
            else
                PrintMeterToFeetList(1, 10);
        }

        static void PrintMeterToFeetList(int start, int stop) {
            for(int feet = start; feet <= stop; feet++) {
                double meter = FeetConverter.ToMeter(feet);
                Console.WriteLine($"{feet} ft = {meter:0.0000} m");
            }
        }
        static void PrintFeetToMeterList(int start, int stop) {
            for(int meter = start; meter <= stop; meter++) {
                double feet = FeetConverter.FromMeter(meter);
                Console.WriteLine($"{meter} m = {feet:0.0000} ft");
            }
        }
    }
}