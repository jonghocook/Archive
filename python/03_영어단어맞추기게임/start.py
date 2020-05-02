import random

wordsDict = {
    "사자": "Lion",
    "호랑이": "Tiger",
    "새": "Bird",
    "비행기": "Airplane",
}

words = []

for word in wordsDict:
    words.append(word)
#wordsDict라는 딕셔너리에서 word는 하나의 객체를 뜻하고 Key값많을 가리킨다. wordsDict딕셔너리 안에 있는 모든 Key값을 words리스트안에 append()함수를 써서 넣게된다.

random.shuffle(words)
#랜덤안에 셔플함수로 words리스트안에 값들을 섞어준다.

chance = 3
for i in range(0, len(words)):
    q = words[i]
    for j in range(0, chance):
        userInput = str(input("{}의 영어단어를 입력하세요> " .format(q)))
        english = wordsDict[q]

        if userInput.strip().lower() == english.lower():
            print("정답입니다!")
            break #break는 반복문 하나를 깰수 있다. 현재는 for문을 깨고 나간다.
        else:
            print("틀렸습니다.. 다시 생각해보세요.")
    if userInput.lower() != english.lower():
        print("정답은 {}입니다." .format(english))

print("준비된 문제를 다 풀었습니다.")

for i in words:
    print("{}" .format(i))