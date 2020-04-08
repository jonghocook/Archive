import random
import os

def get_input_number(msg, casting=int):
    '''사용자에게 msg를 출력하고 casting형태를 확인하여 입력된 값을 리턴합니다.
    Args:
        msg(str): input시 출력할 문구
        casting(class): 사용자에게 입력받은 값의 자료형

    Returns:
        user(casting-value): 사용자에게 입력받은 값
    '''
    while True:
        try:
            num = str(casting(input(msg)))
            if len(num) == 3:
                return num
        except:
            continue

countOut = 0
enemyPoint = 0
    
os.system("cls")

print("*" * 60)
print("야구 게임을 시작합니다!")
print("*" * 60)

while countOut < 3:
    numbers = []
    number = str(random.randint(1, 9)) 
    
    for i in range(3):
        while number in numbers:
            number = str(random.randint(0, 9))
        numbers.append(number)

    countStrike = 0
    
    while countStrike < 3:
        countStrike = 0
        countBall = 0

        num = get_input_number("숫자 3개를 입력하세요> ")

        for i in range(0, 3):
            for j in range(0, 3):
                if num[i] == numbers[j] and i == j:
                    countStrike += 1
                elif num[i] == numbers[j] and i != j:
                    countBall += 1
        
        output = ""
        if countStrike == 0 and countBall == 0:
            enemyPoint += 1
            print("{} Point!". format(enemyPoint))
        else:
            output += "{} EnemyPoint/" .format(enemyPoint)
            if countStrike < 3:
                output += " {} Strike!" .format(countStrike)
            if countBall < 3:
                output += " {} Ball!" .format(countBall)
        print(output.strip())
        
    countOut += 1
    output += " {} Out!" .format(countOut)
    print(output.strip())


print("Three Out, Change!")