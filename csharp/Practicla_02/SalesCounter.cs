using System;
using System.Collections.Generic;

namespace SalesCalculator {
  public class SalesCounter {
    private List<Sale> _sales;
    //_sales이름의 Sale타입의 List를 private하게 선언

    public SalesCounter(List<Sale> sales) {
      _sales = sales;
    }
    //생성자를 통해 Sale타입의 리스트를 매개변수로 받아 필드변수에 담는다.

    public Dictionary<string, int> GetPerStoreSales() {
      Dictionary<string, int> dict = new Dictionary<string, int>();
      //dict라는 이름의 Dictionary 인스턴스를 생성한다.
      foreach(Sale sale in _sales) {
        if(dict.ContainsKey(sale.ShopName))
          dict[sale.ShopName] += sale.Amount;
        else
          dict[sale.ShopName] = sale.Amount;
      }
      //foreach문을 돌며 _sales의 값들이 dict의 key, value로 삽입된다.
      //if문을 통해 중복되는 이름의 값은 +=식을 통해 합산이 된다.
      return dict;
      //함수이름앞에 명시되어 있듯 반환값인 Dictionary타입을 반환. 
    }
  }
}