list = [int(i) for i in input().split()]
list[0], list[-1] = list[-1], list[0]
print(list)