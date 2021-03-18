using System;

namespace FuncTest {
    class MainApp {
        static void Main(string[] args) {
            Func<int> func1 = () => 10;                             //Func를 쓰면 delegate선언을 따로 해줄필요가 없이 인스턴스 생성이 가능하다.
            Console.WriteLine($"Func1() : {func1()}");

            Func<int, int> func2 = (x) => x * 2;
            Console.WriteLine($"Func2() : {func2(4)}");

            Func<double, double, double> func3 = (x, y) => x / y;   //Func는 매개변수중 마지막 변수가 출력값임으로 입력변수에 포함하지 않는다.
            Console.WriteLine($"Func3() : {func3(22, 7)}");
        }
    }
}