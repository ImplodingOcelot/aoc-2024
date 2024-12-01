import math
list1 = []
list2 = []
for i in range(1000):
    inp = input()
    list1.append(int(inp.split("  ")[0]))
    list2.append(int(inp.split("  ")[1]))
su = 0
for a in list1:
    temp = a * list2.count(a)
    su += temp
print(su)