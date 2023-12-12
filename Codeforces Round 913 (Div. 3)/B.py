def process_key_presses(s):
    result = []
    lower_stack = []
    upper_stack = []

    for char in s:
        if char.islower():
            if lower_stack:
                lower_stack.pop()
            else:
                result.append(char)
        elif char.isupper():
            if upper_stack:
                upper_stack.pop()
            else:
                result.append(char)

        lower_stack.append(char.lower())
        upper_stack.append(char.upper())

    return ''.join(result)

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    s = input().strip()
    result = process_key_presses(s)
    print(result)
