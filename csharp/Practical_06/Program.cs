using System;
using System.Collections.Generic;
using System.Linq;

namespace PracticalQuiz3_2 {
  class MainApp {
    static void Main(string[] args) {
      var names = new List<string> { "Seoul", "New Delhi", "Bangkok", "London", "paris", "Berlin", "Canberra", "Hong Kong", };
      var line = Console.ReadLine();

      var cityIndex = names.FindIndex(s => s.ToLower() == line.ToLower());
      Console.WriteLine($"{line} 인덱스?(없으면 -1) : {(cityIndex >= 0 ? cityIndex : -1)}");

      var numbers = names.Count(s => s.Contains('o'));
      Console.WriteLine($"리스트에 'o'가 포함된 이름 : {numbers}개");

      Exercise1(names);
      Console.WriteLine();
      Exercise2(names);
    }

    static void Exercise1(List<string> names) {
      var where = names.Where(s => s.Contains('o'))
                        .ToArray();
      foreach(var w in where) Console.Write($"{w} | ");
    }

    static void Exercise2(List<string> names) {
      var where = names.Where(s => s.StartsWith("B"))
                      .Select(s => s.Length);
      //Console.WriteLine(where.GetType().Name);
      foreach(var w in where) Console.WriteLine(w);
    }
  }
}