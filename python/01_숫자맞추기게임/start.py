#숫자 맞추기 게임
import random
import os

#input을 받아 숫자인지 여부를 체크하는 함수
def input_check(msg, casting=int):
    while True:
        try:
            user_input = casting(input(msg))
            return user_input
        except:
            continue

chance = 10
count = 0
number = random.randint(1, 99)

os.system("cls")
print("1부터 99까지의 숫자를 {}안에 맞춰 보세요." .format(chance))


#아래 반복문은 정답으로 범위를 좁혀가는 구문
while count < chance:
    count += 1
    user_input = input_check("몇 일까요? ")
    if number == user_input:
        break
    elif user_input < number:
        print("{0}번째시도, {1}보다 큰 숫자입니다" .format(count, user_input))
    elif user_input > number:
        print("{0}번째시도, {1}보다 작은 숫자입니다" .format(count, user_input))

#성공 여부를 판단하는 구문
if user_input == number:
    print("{}번째만에 정답! {}이 맞습니다!" .format(count, number))
else:
    print("{}번의 실패... 정답은 {}입니다." .format(count, number))