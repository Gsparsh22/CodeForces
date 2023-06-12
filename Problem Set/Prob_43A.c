#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a, b;

    char s;
    a = 1;
    b = 0;
    scanf(" %c", &s);

    char p;

    for (int i = 0; i < n; i++) {
        scanf(" %c", &p);
        if (p == s) {
            b++;
        }
        else {
            a++;
        }
    }

    if (a > b) {
        printf("%c", s);
    }
    else {
        printf("%c", p);
    }

    return 0;
}