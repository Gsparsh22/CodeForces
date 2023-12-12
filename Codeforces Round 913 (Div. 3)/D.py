def min_distance_to_complete_level(t, test_cases):
    results = []

    for _ in range(t):
        n, segments = test_cases[_][0], test_cases[_][1:]
        max_distance = 0

        for i in range(n):
            l, r = segments[i]
            if i == 0:
                max_distance = max(max_distance, r)
            else:
                max_distance = max(max_distance, r - l)

        results.append(max_distance)

    return results


# Input parsing
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    segments = [list(map(int, input().split())) for _ in range(n)]
    test_cases.append([n] + segments)

# Calculate and print the results
results = min_distance_to_complete_level(t, test_cases)
for res in results:
    print(res)
