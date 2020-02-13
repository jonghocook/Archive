#유니코드와 인코딩
#전세계에 모든 글자를 표기할 수 있는 코드이며
#유니코드를 저장하는 방식을 인코딩이라 한다.

with open("utf-8.txt", mode="w", encoding="utf-8") as rfile:
    rfile.write("가")

with open("utf-8.txt", mode="r", encoding="utf-8") as rf, \
    open("cp949.txt", mode="w") as t:
    t.write(rf.read())

file = open("utf-8.txt", mode="rb") #"r"은 "rt"와 같은 뜻이고, "rb"는 read binary의 약어이다.
print(file.read().decode("utf-8"))
file.close()

