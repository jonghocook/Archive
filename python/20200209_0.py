# 반복문 for

# a = "abcdefg"

# for i in a:
#     print(i)

# b = ["python", "java", "c/c++", "c#"]

# for i in b:
#     print(i)


# for i in range(1, 10, 2):   # 1에서 10까지 2씩 띄어서 반복
#     print(i)

# c = [(1, 2), (3, 4), (5, 6)]
# for i in c:
#     for j in i:
#         print(j)

# d = [[[1, 2, 3, 4, 5], ['a', 'b', 'c'], [11, 12, 13, 14]]]
# for i in d:
#     for j in i:
#         for x in j:
#             print(x)

# student = [{"홍길동": 100},{"가제트": 200}, {"가가멜": 300}]
# for i in student:
#     data = (list(i.items())[0]) #0번째는 자동으로 숫자가 올라가는듯.. foreach에 가까운 for문입니다.
#     name = data[0]
#     value = data[1]
#     print("이름: {} 점수: {}" .format(name, value))

# for s, i in enumerate(student):
#     data = (list(i.items())[0])
#     name = data[0]
#     value = data[1]
#     print("{} 이름: {} 점수: {}" .format(s, name, value))

# sentence = "Life is short, you need python."

# for s, i in enumerate(sentence, start = 1):
#     print("{}st: {}" .format(s, i))

# result = []
# for num in range(1, 6):
#     result.append(num + 5)

# result0 = [num + 5 for num in range(1, 6)]
# print(result0)

# result1 = [num + 5 for num in range(1, 10) if num % 2 == 0]
# print(result1)

# result2 = [num * 3 for num in range(1, 99) if num % 2 == 0]
# print(result2)

# for i in range(2, 10):
#     for j in range(1, 10):
#         result3 = i * j
#         print("{} x {} = {}" .format(i, j, result3))

gugudan = ["{} x {} = {}" .format(i, j, i * j) for i in range(2, 10) for j in range(1, 10)]
print(gugudan)
# 리스트에 저장할 때 사용하는 컨프리핸션, 리스트와 for문의 조합 [결과값 for 반복조건 그리고 그외 조건]이런식이됨.