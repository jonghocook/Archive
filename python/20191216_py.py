#2019\.12\.16
print("\n{0:=<30}\n".format("List"))
a = []
b = [1, 2, 3]
c = ['Life', 'is', 'too', 'short']
d = [1, 2, 'Life', 'is']
e = [1, 2, ['Life', 'is']]

a.append(1)
a.insert(0, 2)
print(a)
a.sort()
a.insert(2, 3)
a.reverse()
a.append(2)
print(a, a[0], a[0] + a[2], a[-1], a * 3, len(a), a.index(1), a.count(2))
a.remove(2)
a.sort()
a.extend(b)
print(a, len(a))
