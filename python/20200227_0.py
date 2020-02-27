def is_prime_number(num):
    '''소수를 구하는 함수
    '''
    prime_lists = [False, False] + [True] * (num - 1)
    primes = []
    for i in range(2, num + 1):
        if prime_lists[i]:
            for j in range(2 * i, num + 1, i):
                prime_lists[j] = False
    primes = [i for i in range(2, num +1) if prime_lists[i] == True]

    if num in primes:
        return True
    else:
        return False

def get_input_user(msg, casting=int):
    '''사용자에게 msg를 출력하고 casting형태를 확인하여 입력된 값을 리턴합니다.
    Args:
        msg(str): input시 출력할 문구
        casting(class): 사용자에게 입력받은 값의 자료형
    
    Returns:
        user(casting-value): 사용자에게 입력받은 값
    '''
    while True:
        try:
            user = casting(input(msg))
            return user
        except:
            continue

def test1(num):
    num += 10
    print(num)

def test2(lists):
    lists.append("AAAA")
    print(lists)

def save_winner(*args):
    print(args)

def save_winner2(**kwargs):
    print(kwargs)
    if kwargs.get("name1"):
        print(kwargs["name1"])

def hi():
    print("Hello!")

def add(a, b):
    return a + b

def cal(func, a, b):
    print("결과 {}" .format(func(a, b)))

def outer_function(func):
    def inner_function(*args, **kwargs):
        print("함수명 : {}" .format(func.__name__))
        print("args : {}" .format(args))
        print("kwargs : {}" .format(kwargs))
        result = func(*args, **kwargs)
        print("result : {}" .format(result))
        return result
    return inner_function

# user = get_input_user("사용자의 이름을 입력하세요> ", str)
# age = get_input_user("사용자의 나이를 입력하세요> ")
# print(user, age)

# num = get_input_user("2 이상의 숫자를 입력하세요> ", int)
# if is_prime_number(num):
#     print("{}는 소수입니다." .format(num))
# else:
#     print("{}는 소수가 아닙니다." .format(num))

# a = 50
# test1(a)
# print(a)

# b = []
# b.append("1234")
# test2(b)
# print(b)

# save_winner("홍길동", "가가멜", "아즈라엘")
# save_winner2(name1 = "홍길동", name2 = "가가멜")

# hi()
# hello = hi
# hello()
# print(type(hello))

# cal(add, 1, 5)

f = outer_function(add)
f(10, 20)