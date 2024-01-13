# Function to check if monsters can be killed with the same enhanced shot
def can_kill_monsters(a, b, c):
    total_health = a + b + c
    # If the total health is divisible by 9 and each monster has at least total_health/9 health
    return total_health % 9 == 0 and min(a, b, c) >= total_health // 9

# Input the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input health points of three monsters
    a, b, c = map(int, input().split())
    
    # Check if monsters can be killed with the same enhanced shot and print the result
    if can_kill_monsters(a, b, c):
        print("YES")
    else:
        print("NO")
