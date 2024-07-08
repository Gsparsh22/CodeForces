def count_points(n, arr):
    points = 0
    for k in range(1, n + 1):
        if n % k == 0:
            remainders = set()
            valid = True
            for j in range(k):
                subarray = set(arr[j::k])
                if subarray in remainders:
                    valid = False
                    break
                remainders.add(subarray)
            if valid:
                points += 1

    return points

# Example usage:
t = int(input())
test_cases = []

for _ in range(t):
    n, k, x = int(input())
    arr = list(map(int, input().split()))
    test_cases.append((n, arr))

for i in range(t):
    result = count_points(test_cases[i][0], test_cases[i][1])
    print(result)