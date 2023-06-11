#include <stdio.h>

unsigned long long int binrep(int a) {
    if (a == 0) {
        return 0;
    }
    return (a % 2 + 10 * binrep(a / 2));
}

int countOnes(unsigned long long int a) {
    int count = 0;
    while (a != 0) {
        if (a % 10 == 1) {
            count++;
        }
        a /= 10;
    }
    return count;
}

int main() {
    int x;
    scanf("%d", &x);

    unsigned long long int bin = binrep(x);
    printf("%llu\n", bin);

    int count = countOnes(bin);
    printf("%d\n", count);

    return 0;
}
