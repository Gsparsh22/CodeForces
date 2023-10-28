import math

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    ans = 0
    a[0] = a[0] + 1
    ans = math.prod(a)
    print(ans)