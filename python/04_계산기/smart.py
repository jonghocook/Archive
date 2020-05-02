# 5 + 5 * 10 수학적 사칙연산이 아닌 입력 순차적으로 계산하기
import os

#userInput = input("계산식을 입력하세요> ")
#operator = ["+", "-", "*", "/", "="]    #사칙연산을 리스트로 준비한다.

# stringList = []
# lastOP = 0

# if userInput[-1] not in operator:
#     userInput += "="

# for i, s in enumerate(userInput):   #반복문을 통해 값 분리 i는 인덱스, s는 값
#     #print(i, s)
#     if s in operator:   #리스트에 입력
#         if userInput[lastOP:i].strip() != "":   #userInput의 0번째부터 i개수의 값을 strip()해서 ""와 비교한후 다르다면 if안으로 들어가라
#             stringList.append(userInput[lastOP:i].strip())  #userInput의 0부터 i개수의 값을 stringList리스트에 append하라 
#             stringList.append(s)    #상위 if문에서 연산기호를 잡아 그전까지의 숫자를 입력받았다면 s값에 들어간 연산기호를 리스트에 입력한다
#             lastOP = i + 1  #연산기호부터 기호까지 안에 있는 숫자를 잡기위해 lastOP값을 조정한다

# stringList = stringList[:-1]
# print(stringList)

# pos = 0
# while True:
#     if pos + 1 > len(stringList):    #if len(stringList) == 1:
#         break
#     if len(stringList) > pos + 1 and stringList[pos] in operator:   #연산기호 체크 / stringList길이가 짝수(pos에 1을 더해, 수식은 항상 중간에 오니까)값보다 크고 stringList n번째 값이 operator값중에 있다면 입장
#         temp = stringList[pos - 1] + stringList[pos] + stringList[pos + 1]  #기호를 체크해서 들어온 문장이니 pos앞자리는 숫자 pos는 기호 pos다음자리또한 숫자임으로 셋의 식을 temp에 넣는다
#         del stringList[0:3] #stringList의 3자리는 삭제
#         stringList.insert(0, str(eval(temp)))   #insert()함수를 사용하여 원하는 자리에 temp값을 eval()로 계산하여 str값으로 대입한다
#         pos = 0 #pos값은 다시 0으로 초기화하여 앞자리부터 다시 계산하도록 한다
#     pos += 1    #pos값을 기호가나올때까지 1씩 상승시킨다
#     #print(stringList)
# if len(stringList) > 0:
#     result = float(stringList[0])
# round(result, 4)

operator = ["+", "-", "*", "/", "="]

def stringCalculator(userInput, showHistory=False):
    stringList = []
    lastOP = 0

    if userInput[-1] not in operator:
        userInput += "="

    for i, s in enumerate(userInput):
        if s in operator:
            if userInput[lastOP:i].strip() != "":
                stringList.append(userInput[lastOP:i].strip())
                stringList.append(s)
                lastOP = i + 1

    del stringList[-1]

    pos = 0
    while True:
        if pos + 1 > len(stringList):
            break
        if len(stringList) > pos + 1 and stringList[pos] in operator:
            temp = stringList[pos - 1] + stringList[pos] + stringList[pos + 1]
            del stringList[0:3]
            stringList.insert(0, str(eval(temp)))
            pos = 0

            if showHistory:
                print(stringList)
        pos += 1
    
    if len(stringList) > 0:
        result = float(stringList[0])
    
    return round(result, 4)

while True:
    os.system("cls")
    userInput = input("계산식을 입력하세요> ")
    if userInput == "exit":
        break
    result = stringCalculator(userInput, showHistory=True)
    print("결과 : {}" .format(result))
    os.system("pause")


