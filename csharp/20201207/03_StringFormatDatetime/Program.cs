using System;
using System.Globalization;
using static System.Console;

namespace StringFormatDatetime {
    class MainApp {
        static void Main(string[] args) {
            DateTime dt = new DateTime(2020, 12, 07, 14, 20, 22);

            WriteLine("12시간 형식: {0:yyyy-MM-dd tt hh:mm:ss (ddd)}", dt); //년-월-일 오전/오후 12시:분:초 (요일-짧게)
            WriteLine("24시간 형식: {0:yyyy-MM-dd HH:mm:ss (dddd)}\n", dt); //년-월-일 24시:분:초 (요일-길게)

            CultureInfo ciKo = new CultureInfo("ko-KR");
            WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciKo));
            WriteLine(dt.ToString("yyyy-MM-dd HH:mm:ss (dddd)", ciKo));
            WriteLine(dt.ToString(ciKo));
            WriteLine();

            CultureInfo ciEn = new CultureInfo("en-US");
            WriteLine(dt.ToString("yyyy-MM-dd tt hh:mm:ss (ddd)", ciEn));
            WriteLine(dt.ToString("yyyy-MM-dd HH:mm:ss (dddd)", ciEn));
            WriteLine(dt.ToString(ciEn));
        }
    }
}