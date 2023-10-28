def game_23(n, m):
    if m % n != 0:
        return -1

    moves = 0
    division_result = m // n

    while division_result > 1:
        if division_result % 2 == 0:
            division_result //= 2
            moves += 1
        elif division_result % 3 == 0:
            division_result //= 3
            moves += 1
        else:
            return -1

    return moves

# Input
n, m = map(int, input().split())

# Calculate and print the result
result = game_23(n, m)
print(result)
