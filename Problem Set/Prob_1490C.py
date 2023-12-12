def is_sum_of_cubes_possible(t, test_cases):
    results = []
    for i in range(t):
        x = test_cases[i]
        found = False
        for a in range(1, int(x ** (1/3)) + 1):
            b_cubed = x - a ** 3
            b = int(b_cubed ** (1/3))
            if b ** 3 == b_cubed:
                found = True
                break
        if found:
            results.append("YES")
        else:
            results.append("NO")
    return results

# Input
t = int(input())
test_cases = [int(input()) for _ in range(t)]

# Output
results = is_sum_of_cubes_possible(t, test_cases)
for result in results:
    print(result)
