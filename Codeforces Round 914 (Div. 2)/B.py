from heapq import *
from sys import stdin, stdout
import os
import io
import math
import itertools
import collections
from collections import Counter
import bisect

def solve():
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    ans = [0]*n
    q = []
    s = [0]*(n+1)
    for i in range(n-1,-1,-1):
        s[i] = s[i+1]+a[i]
        heappush(q,-a[i])
        while s[i] - len(q)*a[i] < 0:
            s[i] += heappop(q)
        ans[i] = len(q)
    print(*ans)

t = int(input())
for _ in range(t):
    solve()
