#include <stdio.h>

unsigned long long int binrep(int a) {
    unsigned long long int bin = 0;
    int rem, i = 1;

    while (a != 0) {
        rem = a % 2;
        a /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
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
