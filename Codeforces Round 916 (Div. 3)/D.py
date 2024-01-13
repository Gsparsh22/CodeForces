def max_friends(t, testcases):
    for i in range(t):
        n = testcases[i][0]
        skiing = testcases[i][1]
        movie = testcases[i][2]
        board_games = testcases[i][3]

        max_friends = 0

        for j in range(n):
            for k in range(j + 1, n):
                for l in range(k + 1, n):
                    total_friends = skiing[j] + movie[k] + board_games[l]
                    max_friends = max(max_friends, total_friends)

        print(max_friends)

# Input parsing
t = int(input())
testcases = []

for _ in range(t):
    n = int(input())
    skiing = list(map(int, input().split()))
    movie = list(map(int, input().split()))
    board_games = list(map(int, input().split()))
    testcases.append((n, skiing, movie, board_games))

# Call the function with the provided input
max_friends(t, testcases)
