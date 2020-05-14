import random

count = int(input("로또 번호를 몇개 생성할까요?> "))

for j in range(count):  #range()를 이용해 input으로 들어온 수만큼 반복문을 실행한다
    lotto = []  #리스트 생성

    rand_num = random.randint(1, 46)    #do-while문처럼 rand_num에 먼저 랜덤수를 넣는다

    for i in range(6):  #range()를 이용해 원하는 횟수의 번호를 넣도록 유도한다
        while rand_num in lotto:    #동일한번호가 있을경우 while문으로 들어가고 번호가 없을경우 false되면서 아래에 lotto.append()문을 이용해서 리스트에 번호를 넣는다.
            rand_num = random.randint(1, 46)    #and_num에 랜덤수를 넣는다
        lotto.append(rand_num)  #lotto리스트에 번호를 넣는다

    lotto.sort()    #낮은 번호부터 정렬
    print("로또번호: {}" .format(lotto))