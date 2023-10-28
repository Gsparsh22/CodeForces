t = int(input())
for _ in range(t):
    k = str(input())
    if k == "abc" or k == "acb" or k == "bac" or k == "cba":
        print("YES")
    else:
        print("NO")