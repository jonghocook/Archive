using System;
using System.Collections.Generic;
using System.Linq;

namespace Practical08 {
    class MainApp {
        static void Main(string[] args) {
            var _yearMonthList = new YearMonth[] {
                new YearMonth(1993, 8),
                new YearMonth(1978, 12),
                new YearMonth(1985, 2),
                new YearMonth(1977, 2),
                new YearMonth(2017, 6),
            };

            ShowYearMonthArray(_yearMonthList);
            YearMonth _yearmonth = Get21CentryValue(_yearMonthList);
            Console.WriteLine($"\n{_yearmonth._is21Century}");
            Show21CentryValue(_yearMonthList);
            ShowArrayYearMonth(_yearMonthList);
        }

        static void ShowYearMonthArray(YearMonth[] array) {
            foreach(var a in array) {
                Console.Write($"{a} | ");
            }
        }
        static YearMonth Get21CentryValue(YearMonth[] array) {
            foreach(var a in array) {
                if(a._is21Century == true) {
                    return a;
                }
            }
            return null;
        }
        static void Show21CentryValue(YearMonth[] array) {
            YearMonth _yearmonth = Get21CentryValue(array);
            Console.WriteLine(_yearmonth != null ? $"{_yearmonth}" : "21세기 데이터는 없습니다.");
        }
        static IEnumerable<YearMonth> ShowArrayYearMonth(YearMonth[] array) {
            var afterMonth = array.Select(s => s.AddOneMonth());
            Console.WriteLine();
            foreach(var a in afterMonth) Console.Write($"{a} | ");
            return afterMonth;
        }
    }
}