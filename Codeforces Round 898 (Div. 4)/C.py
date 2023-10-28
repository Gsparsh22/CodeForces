# Function to calculate the points for a single test case
def calculate_points(test_case):
    points = 0
    ring_values = [1, 2, 3, 4, 5]

    for i in range(10):
        for j in range(10):
            if test_case[i][j] == 'X':
                distance = max(abs(i - 4), abs(j - 4))
                points += ring_values[distance]

    return points

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    test_case = []
    for _ in range(10):
        row = input()
        test_case.append(row)
    # Calculate and print the points for the current test case
    points = calculate_points(test_case)
    print(points)
