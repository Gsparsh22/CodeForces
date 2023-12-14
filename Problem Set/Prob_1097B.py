def can_reach_zero(n, rotations):
    for mask in range(1 << n):
        total_rotation = 0
        for i in range(n):
            if (mask >> i) & 1:
                total_rotation += rotations[i]
            else:
                total_rotation -= rotations[i]
        if total_rotation % 360 == 0:
            return "YES"
    return "NO"

# Input
n = int(input())
rotations = [int(input()) for _ in range(n)]

# Output
result = can_reach_zero(n, rotations)
print(result)