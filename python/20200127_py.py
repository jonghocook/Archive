def add(a, b):
    return a + b

def say():
    return 'Hi'

def add_many(*args):
    result = 0
    for i in args:
        result = result + i
    return result

def add_mul(choice, *args):
    if choice == 'add':
        result = 0
        for i in args:
            result = result + i
    elif choice == 'mul':
        result = 1
        for i in args:
            result = result * i
    else:
        result = 'none'
    
    return result

def say_nick(nick):
    if nick == '바보':
        #return
        nickname = "나의 별명은 %s 입니다." % nick
    return nickname

def add_and_mul(a, b):
    return a + b, a * b

def print_kwargs(**kwargs):
    print(kwargs)

def say_myself(name, old, man=True):
    print("나의 이름은 %s 입니다." % name)
    print("나이는 %d살입니다." % old)
    if man:
        print("남자입니다.")
    else:
        print("여자입니다.")

a = 3
b = 4
print(add(a, b))

c = say()
print(c)

result = add(a=3, b=7)
print(result)

manyresult = add_many(1, 2, 3)
print(manyresult)

manyresult = add_many(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(manyresult)

mulresult = add_mul('add', 1, 2, 3, 4, 5,)
print(mulresult)

mulresult = add_mul('mul', 1, 2, 3, 4, 5)
print(mulresult)

mulresult = add_mul('none', 1, 2)
print(mulresult)

print_kwargs(a = 1)
print_kwargs(name ='foo', age = 3)

result1, result2 = add_and_mul(3, 4)
print(result1) 
print(result2)

nickname = say_nick('바보')
print(nickname)

say_myself("박응용", 27)
say_myself("박으용", 27, True)
say_myself("박응선", 27, False)

a = 1
b = 2
def vartest(a):
    a = a + 1
    return a

def vartest1():
    global b
    b = b + 1

a = vartest(a)
print(a)
vartest1()
print(b)

add = lambda a, b: a + b    #함수를 한줄로 간결하게 만들때 사용, def를 사용해야 할정도로 복잡하지 않거나 def를 사용할 수 없는 곳에 주로 쓰임.
#lambda로 만든 함수는 return 명령어가 없어도 결과값을 돌려준다.
result3 = add(3, 4)
print(result3)

inputtext = input()
print("input은 입력되는(%s)모든것을 문자열로 취급한다." % inputtext)

number = input("숫자를 입력하세요 : ")
print(number)

for i in range(10):
    print(i, end='! ')