import random
import os

numbers = []
number = str(random.randint(0, 9))

for i in range(3):
    while number in numbers:
        number = str(random.randint(0, 9))
    numbers.append(number)
# for문을 사용해 3번 반복한다.
# while문을 사용해 numbers배열안에 number수가 있는지 체크하고 동일한 숫자가 있다면 number에 새로운 숫자를 넣어준다. number의 새로운 값이 기존 값과 동일할 경우 while문은 깨지지 않고 numbers안에 없는 수가 나올때까지 while문이 실행된다.
# while문이 깨지면 numbers배열에 append(number)로 새로운 숫자가 추가된다.

os.system("cls")

print("*" * 60)
print("야구게임을 시작합니다!")
print("*" * 60)

countStrike = 0
countBall = 0
# 변수설정

while countStrike < 3:
    countStrike = 0
    countBall = 0
# 변수를 다시 초기화해서 값을 유추할수 있도록한다.

    num = str(input("숫자 3자리를 입력하세요> "))
    if len(num) == 3:
        for i in range(0, 3):
            for j in range(0, 3):
                if num[i] == numbers[j] and i == j:
                    countStrike += 1
                elif num[i] == numbers[j] and i != j:
                    countBall += 1
# for문을 두번 사용하여 사용자가 입력한 3자리의 숫자를 기존 배열인 numbers의 숫자와 비교한다.
# 값이 같고 자리도 같으면 스트라이크+1, 값이 같고 자리값이 다르면 볼+1

        if countStrike == 0 and countBall == 0:
            print("3 Out!")
        else:
            output = ""
            if countStrike > 0:
                output += "{} Strike" .format(countStrike)
            if countBall > 0:
                output += " {} Ball" .format(countBall)

            print(output.strip())
# 결과값을 출력하기 위해 if문을 사용하여 스트라이크와 볼값이 모두 0일 경우 3아웃, 그외 else문 앞에서 각각 if문을 발동하여 output변수에 스트라이크와 볼값을 더해 출력한다. 이때 output.strip()을 사용하여 불필요한 공백을 삭제해서 출력한다.

# 스트라이크 값이 3이하일때만 while문이 발동되어 반복됨으로 numbers[]배열과 num값이 일치할경우 while문은 깨지고 죄종 "Mission Completed!"문이 출력된다.


print("Mission Completed!")