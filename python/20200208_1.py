# 반복문 while

guest = 1

while guest < 10:
    print("손님이 {}명 입니다.".format(guest))
    guest = guest + 1
    if guest == 10:
        print("손님이 꽉 찼습니다.")

num = 1
hol = 0
jjak = 0

while num <= 10:
    if num % 2 == 0:
        print("짝 {}".format(num))
        jjak += num
    else:
        print("홀 {}".format(num))
        hol += num
    num += 1

print("홀의 합 {}".format(hol))
print("짝의 합 {}".format(jjak))

num = 1
sum = 0
while num <= 100:
    sum += num
    num += 1
print(sum)