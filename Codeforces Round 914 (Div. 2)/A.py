def count_fork_positions(t, test_cases):
    results = []
    for i in range(t):
        a, b = test_cases[i][0]
        xK, yK = test_cases[i][1]
        xQ, yQ = test_cases[i][2]

        dx = abs(xK - xQ)
        dy = abs(yK - yQ)

        if (dx % a == 0 and dy % b == 0 and (dx // a) % 2 == (dy // b) % 2) or \
           (dy % a == 0 and dx % b == 0 and (dy // a) % 2 == (dx // b) % 2):
            results.append(1)
        else:
            results.append(2)

    return results

t = int(input())
test_cases = []
for _ in range(t):
    a, b = map(int, input().split())
    xK, yK = map(int, input().split())
    xQ, yQ = map(int, input().split())
    test_cases.append(((a, b), (xK, yK), (xQ, yQ)))

results = count_fork_positions(t, test_cases)
for res in results:
    print(res)
