def longest_common_subsegment(x, y):
    max_length = 0
    i = 0
    j = 0
    
    while True:
        ai = i ^ x
        bj = j ^ y
        
        if ai == bj:
            length = 1
            while True:
                next_ai = (i + length) ^ x
                next_bj = (j + length) ^ y
                if next_ai == next_bj:
                    length += 1
                else:
                    break
            max_length = max(max_length, length)
        
        if ai < bj:
            i += 1
        else:
            j += 1
        
        if ai == 0 or bj == 0:
            break
    
    return max_length

# Input
t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    print(longest_common_subsegment(x, y))

# Test the provided input
print("Provided input test:")
print(longest_common_subsegment(0, 1))
print(longest_common_subsegment(12, 4))
print(longest_common_subsegment(57, 37))
print(longest_common_subsegment(316560849, 14570961))
