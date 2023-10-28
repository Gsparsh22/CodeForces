def find_numbers(t, test_cases):
    results = []
    for _ in range(t):
        A, B = test_cases[_]
        if B == 1:
            results.append("NO")
        else:
            x = A
            y = A * B
            z = x + y
            results.append((x, y, z))

    return results

t = int(input())
test_cases = []
for _ in range(t):
    A, B = map(int, input().split())
    test_cases.append((A, B))

results = find_numbers(t, test_cases)
for result in results:
    if result == "NO":
        print("NO")
    else:
        x, y, z = result
        print("YES")
        print(x, y, z)
