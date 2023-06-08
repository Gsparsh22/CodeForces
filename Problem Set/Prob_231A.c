#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int a[3];
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        if(a[0] == 1 && a[1] == 1 && a[2] == 0) {
            count++;
        }
        if(a[0] == 0 && a[1] == 1 && a[2] == 1) {
            count++;
        }
        if(a[0] == 1 && a[1] == 0 && a[2] == 1) {
            count++;
        }
        if(a[0] == 1 && a[1] == 1 && a[2] == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
