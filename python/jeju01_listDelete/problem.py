# 다음리스트에서 400, 500을 삭제하는 Code를 입력하세요.
# nums = [100, 200, 300, 400, 500]

import os

os.system("cls")

nums = [100, 200, 300, 400, 500]

print("처음 nums의 갯수는 {} \n" .format(len(nums)))

del nums[2] # dle을 이용해서 객체 삭제

for i in nums:
    print("nums안에 {}" .format(i))

print("300을 뺀 갯수는 {} \n" .format(len(nums)))

nums.append(300)
nums.sort()
del nums[3:]
nums.insert(0, 400)
nums.sort()
nums.pop()

for i in nums:
    print("nums안에 {}" .format(i))

print("nums안에 400, 500이 없음으로 갯수는 총 {}개 이다. \n" .format(len(nums)))
print("nums = [{0}, {1}, {2}]" .format(nums[0], nums[1], nums[2]))
