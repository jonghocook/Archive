# #내장함수
# a = int("100", 16)

# print(a)

# b = 0.1 + 0.2

# #사용자 함수

# def funtionEx():
#     print("함수호출")
#     return True

# a = funtionEx()

# c = 10
# def add(e, f):
#     c = e + f
#     return c

# d = add(1, 10)
# print(d, c)

# def get_input_user(msg, casting):
#     while True:
#         try:
#             user = casting(input(msg))
#             return user
#         except:
#             continue

# user = get_input_user("사용자 이름을 입력하세요> ", str) 
# age = get_input_user("사용자 나이를 입력하세요> ", int)
# print(user, age)

def get_input_user(msg, casting=int):
    while True:
        try:
            user = casting(input(msg))
            return user
        except:
            continue

user = get_input_user("사용자 이름을 입력하세요> ", str)
age = get_input_user("사용자 나이를 입력하세요> ")
print(user, age)