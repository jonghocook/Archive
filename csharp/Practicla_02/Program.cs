using System;
using System.Collections.Generic;
using System.IO;
using static System.Console;

namespace SalesCalculator {
    class MainApp {
        static void Main(string[] args) {
            SalesCounter sales = new SalesCounter(ReadSales("sales.csv"));
            //아래의 ReadSales함수를 호출해서 반환된 값, List<Sale>타입을 SaleCounter형식의 인자로 받아 인스턴스를 생성합니다.
            Dictionary<string, int> amountPerStore = sales.GetPerStoreSales();
            //생성된 인스턴스 sales의 함수 GetPerStoreSales()의 반환값인 dict을 amountPerStore값이 가리키도록 합니다.
            foreach(KeyValuePair<string, int> obj in amountPerStore) {
                WriteLine($"{obj.Key} {obj.Value}");
            }
            //값을 출력합니다.
        }

        static List<Sale> ReadSales(string filePath) {
            List<Sale> sales = new List<Sale>();
            string[] lines = File.ReadAllLines(filePath);
            //ReadAllLines로 파일을 열고 모든 줄을 읽어 string배열에 줄별로 넣습니다.
            foreach(string line in lines) {
                string[] items = line.Split(',');
                //줄마다 ','를 기준으로 잘라 다시 items이름의 string배열에 넣습니다.
                Sale sale = new Sale {
                    ShopName = items[0],
                    ProductCategory = items[1],
                    Amount = int.Parse(items[2])
                };
                //Sale타입의 sale 인스턴스를 만들고 items배열의 값들을 차례대로 담습니다.
                sales.Add(sale);
                //Sale타입의 sale을 다시 List<Sale>에 넣습니다.
                //자 그럼 다시 처음으로 가서 다음줄 그다음줄 계속 반복합니다.
            }
            return sales;
            //List<Sale>타입의 sales에 값이 다 담겼으니 값을 반환합니다.
        }
    }
}