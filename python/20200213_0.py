# 파이썬 예외 처리 try / except // 개발과정에서 오류가 날수 있는 상황을 최대한 제외하고 예외처리를 많이 안쓰는 것이 좋다.

# try:
#     val = "10.5"
#     n = int(val)
#     idx = []
#     idx[0] = 100
# except Exception as e:
#     print("오류 발생 {}".format(e))

# try:
#     n = "10.5"
#     v = int(n)
# except:
#     print("오류 발생")
# else:
#     print("정상동작 확인")
#try문에 이상이 없을경우 except 안에 있는 명령을 실행하지 않고 else가 실행된다.

try:
    file = open("sample.txt", mode="r")
    n = "10.5"
    v = int(n)
except:
    print("오류 발생")
finally:
    file.close()
    print("파이널리 호출")
#try문의 오류와 상관없이 finally문이 발동되며 사용은 예를 들어 파일을 열고 닫아야 하는 경우에 사용되기도 한다.
