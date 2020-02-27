# class

class FishCakeMaker_0:
    def __init__(self, param):  #__int__는 생성자
        self._fish_name = param
    def show_name(self):
        print(self._fish_name)

fish = FishCakeMaker_0("붕어빵")
fish.show_name()

class FishCakeMaker_1:
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

    def __del__(self):
        print("삭제 되었습니다.")

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
        return "<class FisicakeMaker_1 (size={}, price={}, flavor={})>" .format(self._size, self._price, self._flavor)

    def show(self):
        print("붕어빵 종류 {}" .format(self._flavor))
        print("붕어빵 크기 {}" .format(self._size))
        print("붕어빵 가격 {}" .format(self._price))
        print("*" * 60)

#==============================================================여기까지 class

#인스턴스
fish1 = FishCakeMaker_1()
fish2 = FishCakeMaker_1(size=20, price=300)
fish3 = FishCakeMaker_1(size=15, price=500, flavor="초콜렛")

print(fish3)

if fish3 < fish2:
    print("fish2가 비쌉니다.")
else:
    print("fish3이 비쌉니다.")

#상속 클래스
class MarketGoods(FishCakeMaker_1):
    def __init__(self, margin=1000, **kwargs):
        super().__init__(**kwargs)
        self._market_price = self._price + margin
    def show(self):
        print(self._flavor, self._market_price)

fish4 = MarketGoods(size=20, price=500)
fish4.show()