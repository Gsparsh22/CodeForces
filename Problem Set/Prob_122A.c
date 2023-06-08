#include <stdio.h>

int isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return 0;
        }
        number /= 10;
    }
    return 1;
}

int isAlmostLucky(int number) {
    for (int i = 1; i <= number; i++) {
        if (number % i == 0 && isLucky(i)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isAlmostLucky(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
