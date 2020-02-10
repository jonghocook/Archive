# 사용자 입력 받기

# num1 = int(input("숫자1: "))
# num2 = int(input("숫자2: "))
# print(num1 + num2)

# langs = ["한국어", "English"]
# for i, l in enumerate(langs, start = 1):
#     print("{}. {}" .format(i, l))

# while True:
#     sel = input("언어를 선택하세요. > ")

#     if not sel.isnumeric():
#         continue
#     sel = int(sel)
#     if 0 < sel < 3:
#         break
# print("사용자가 선택한 언어는 {}입니다." .format(langs[sel-1])) #langs 리스트는 0번째 부터 시작함으로 -1을 한다.

# 문자열인지 숫자인지 판정 & 2이상의 숫자인지 판정.
while True:
    num = input("2이상의 소수를 입력하세요: ")
    if not num.isnumeric():
        continue
    num = int(num)
    if num < 2:
        continue
    break

# # 입력받은 num의 값이 2
# isprime = True
# for n in range(2, num):
#     if num % n == 0:
#         isprime = False
#         break

# if isprime:
#     print("소수 입니다.")
# else:
#     print("소수가 아닙니다.")


#======================== 아래는 리스트에 소수를 넣는 방법.


prime_list = [False, False] + [True] * (num - 1) 
prime = []
 # 리스트를 만들때 길이는 입력값에 비례하여 만들기위해 앞의 2부터 소수임으로 앞에 두자리는 False로 날리고 그다음은 num값으로 자리를 계산해준다.
 # 2번째자리 True를 num-1개 생성한다.
#print(prime_list)

for i in range(2, num + 1):
    if prime_list[i]:
        for j in range(2 * i, num + 1, i):
            prime_list[j] = False
# 리스트에서 소수를 제외한 자리에는 False를 대입시키는 반복문.

primes = [i for i in range(2, num + 1) if prime_list[i] == True]
print(primes)
# 리스트의 True인 자리에 이제 숫자를 입력한다.

if num in primes:
    print("소수 입니다.")
else:
    print("소수가 아닙니다.")