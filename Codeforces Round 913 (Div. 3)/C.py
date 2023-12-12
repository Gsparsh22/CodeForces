def min_length_after_removal(n, s):
    stack = []
    for char in s:
        if stack and stack[-1] != char:
            stack.pop()
        else:
            stack.append(char)
    return len(stack)

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        result = min_length_after_removal(n, s)
        print(result)

if __name__ == "__main__":
    main()
