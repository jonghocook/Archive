using System;
using static System.Console;

namespace MoreOnArray {
    class MainApp {
        private static bool CheckPassed(int score) {
            if(score >= 60) return true;
            else return false;
        }

        private static void Print(int value) {
            Write($"{value} ");
        }

        static void Main(string[] args) {
            int[] scores = new int[] { 80, 74, 81, 90, 34 };

            foreach(int score in scores) Write($" {score}");
            WriteLine();

            Array.Sort(scores);
            Array.ForEach<int>(scores, new Action<int>(Print));
            WriteLine();

            WriteLine($"Number of dimensions: {scores.Rank}");

            WriteLine("Binary Search: 81 is at {0}", Array.BinarySearch<int>(scores, 81));
            WriteLine("Linear Search: 90 is at {0}", Array.IndexOf(scores, 90));

            WriteLine("Everyone passed? : {0}", Array.TrueForAll<int>(scores, CheckPassed));

            int index = Array.FindIndex<int>(scores, delegate(int score) {
                if(score < 60) return true;
                else return false;
            });

            scores[index] = 61;

            WriteLine("Everyone passed? : {0}", Array.TrueForAll<int>(scores, CheckPassed));
            
            WriteLine($"Old length of scores : {scores.GetLength(0)}");

            Array.Resize<int>(ref scores, 10);

            WriteLine($"New length of scores : {scores.Length}");

            Array.ForEach<int>(scores, new Action<int>(Print));
            WriteLine();

            Array.Clear(scores, 3, 7);

            Array.ForEach<int>(scores, new Action<int>(Print));
            WriteLine();
        }
    }
}