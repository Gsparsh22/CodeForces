def minimum_taxis(groups):
    # Count the number of children in each group size
    count = [0] * 5  # We use index 1 to 4 to represent group sizes 1 to 4
    for size in groups:
        count[size] += 1

    # Calculate the minimum number of taxis needed
    taxis = count[4]  # Each group of size 4 needs a separate taxi

    # Groups of size 3 can be combined with groups of size 1
    taxis += count[3]
    count[1] = max(0, count[1] - count[3])

    # Combine groups of size 2 in pairs
    taxis += count[2] // 2
    count[2] %= 2

    # Combine remaining groups of size 2 and 1 into taxis
    if count[2] == 1:
        taxis += 1
        count[1] = max(0, count[1] - 2)

    # Combine remaining groups of size 1 into taxis
    taxis += (count[1] + 3) // 4

    return taxis

# Input
n = int(input())
groups = list(map(int, input().split()))

# Output
result = minimum_taxis(groups)
print(result)
