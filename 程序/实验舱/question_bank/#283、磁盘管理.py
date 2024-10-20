pos = 1
cur = 0
sum = 0
now = 0
ans = 0
q = 10

n = (int)(input())

while 1:
    now = q - sum - 1
    q = q * 10
    sum = sum + now
    if sum >= n:
        ans += (n - cur) * pos
        break
    ans += now * pos
    pos = pos + 1
    cur = sum

print(ans)