def process_test_case():
    n, m = map(int, input().split())
    
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    common_elements = set(a) & set(b)
    if not common_elements:
        print(sum(a))
    else:
        print(sum(a) - min(b) * len(common_elements))

def main():
    t = int(input())
    for _ in range(t):
        process_test_case()

if __name__ == "__main__":
    main()
