#파일 읽고 쓰기
#파이썬에서 파일 읽고 쓰기

file = open ("sample.txt", mode="w", encoding="utf-8")
file.write("안녕! 파이썬 \n인생은 짧아 친구! 파이썬은 필요하다구!\n언능 공부해서... 어디다 쓰지?;;..\n젠장!!!")
file.close()

# rfile = open("sample.txt", mode="r", encoding="utf-8")
# for l in rfile:
#     print(l)
# rfile.close()

# with open("sample.txt", mode="r", encoding="utf-8") as file:    #with문은 따로 close를 써줄필요가 없다.
#     print(file.read())


# with open("sample.txt", mode="r", encoding="utf-8") as s, \
#     open("sample2.txt", mode="w", encoding="utf-8") as t:
#     t.write(s.read().replace("파이썬", "python")) 

# rfile = open("sample.txt", mode="r", encoding="utf-8")
# sentence = rfile.read()
# rfile.close()

# print(sentence)

with open("sample.txt", mode="r", encoding="utf-8") as rfile: 
    print(rfile.read().replace("파이썬", "Python"))