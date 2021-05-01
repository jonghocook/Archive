namespace Practical08 {
  class YearMonth {
    public int _year {get; private set;}
    public int _month {get; private set;}
    public bool _is21Century => 2001 <= _year && _year <= 2100;

    public YearMonth(int year, int month) {
      _year = year;
      _month = month;
    }

    public YearMonth AddOneMonth() {
      if(_month == 12) {
        return new YearMonth(this._year + 1, 1);
      }
      else {
        return new YearMonth(this._year, this._month + 1);
      }
    }

    public override string ToString() {
      return _year + "년 " + _month + "월";
    }
  }
}