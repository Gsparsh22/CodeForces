#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    char a[3];
    while (t--) {
        a[0] = ' ';
        a[1] = ' ';
        a[2] = ' ';
        scanf(" %c %c %c", &a[0], &a[1], &a[2]);
        if (a[0] == 'a' && a[1] == 'b' && a[2] == 'c') {
            printf("YES\n");
        } else if (a[0] == 'a' && a[1] == 'c' && a[2] == 'b') {
            printf("YES\n");
        } else if (a[0] == 'b' && a[1] == 'a' && a[2] == 'c') {
            printf("YES\n");
        } else if (a[0] == 'c' && a[1] == 'b' && a[2] == 'a') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
