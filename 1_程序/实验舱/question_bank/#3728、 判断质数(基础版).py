n = (int)(input())
ans = (n > 1)
for i in range(2, n):
    if n % i == 0:
        ans = 0
if ans:
    print("质数")
else:
    print("不是质数")