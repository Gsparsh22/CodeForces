def count_shops(n, xi, q, mi):
    xi.sort()

    answers = []
    for budget in mi:
        low, high = 0, n - 1
        count = 0

        while low <= high:
            mid = (low + high) // 2
            if xi[mid] <= budget:
                count = mid + 1
                low = mid + 1
            else:
                high = mid - 1

        answers.append(count)

    return answers

n = int(input())
xi = list(map(int, input().split()))
q = int(input())
mi = [int(input()) for _ in range(q)]

result = count_shops(n, xi, q, mi)
for ans in result:
    print(ans)
