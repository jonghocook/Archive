# 현재 시간이 12시부터 1시 이전이면 점심을 먹고
# 3시부터 4시 이거나 아프면 휴식하고
# 아니면 일을 한다.

time = 12
seek = True

if 12 <= time < 1 and not seek:
    print("점심 먹으러 감")
elif 3 <= time <= 4 or seek:
    print("휴식시간")
else:
    print("일하는 중...")

a = 100
#ret = 100 if a > 10 else 500
ret = {a > 10:100, a < 10:500}.get(True, 200)
print(a)