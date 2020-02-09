#반복문 while, for

# num = 0
# while True:
#     print(num)
#     num += 1

#     if num == 10:
#         break

# for i in range(1, 10):
#     for j in range(10):
#         print(i)
#         if i == 10:
#             break

# num = 0
# while num < 10:
#     num += 1
#     if num == 5:
#         continue
#     print(num)

# point = [80, 100, 50, 40, 60]
# for p in point:
#     if p < 70:
#         continue
#     print("{}점 입니다." .format(p))

hap = 0
for i in range(1, 100):
    if i % 2 == 0:
        continue
    hap += i
print("홀수의 합은 {}이다." .format(hap))