#class

class FishCakeMaker:
    def __init__(self, **kwargs):
        self._size = 10
        self._flavor = "팥"
        self._price = 100
        if "size" in kwargs:
            self._size = kwargs.get("size")
        if "flavor" in kwargs:
            self._flavor = kwargs.get("flavor")
        if "price" in kwargs:
            self._price = kwargs.get("price")

    # def __del__(self):
    #     print("삭제 되었습니다.")

    def __lt__(self, other):
        return self._price < other._price
    def __le__(self, other):
        return self._price <= other._price
    def __gt__(self, other):
        return self._price > other._price
    def __ge__(self, other):
        return self._price >= other._price
    def __eq__(self, other):
        return self._price == other._price
    def __ne__(self, other):
        return self._price != other._price

    def __str__(self):
        return "<class FisiCakeMaker (size = {}, price = {}, flavor = {})>" .format(self._size, self._price, self._Flavor)

    def show(self):
        print("붕어빵의 종류 {}" .format(self._flavor))
        print("붕어빵의 크기 {}" .format(self._size))
        print("붕어빵의 가격 {}" .format(self._price))
        print("*" * 60)

class MarketGoods(FishCakeMaker):
    def __init__(self, margin=1000, **kwargs):
        super().__init__(**kwargs)
        self._market_price = self._price + margin

    def show(self):
        print(self._flavor, self._market_price)

def add(a, b):
    return a + b

if __name__ == "__main__":
    fish1 = MarketGoods(size=20, price=500)
    fish1.show()