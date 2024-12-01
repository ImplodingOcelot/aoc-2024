import math
list1 = []
list2 = []
for i in range(1000):
    inp = input()
    list1.append(int(inp.split("  ")[0]))
    list2.append(int(inp.split("  ")[1]))
list1.sort()
list2.sort()
su = 0
print(list1)
print(list2)
for i in range(len(list1)):
    if list2[i] > list1[i]:
        temp = list2[i] - list1[i]
    else:
        temp = list1[i] - list2[i]
    su = su + temp
    
print(su)
    