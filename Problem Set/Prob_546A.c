#include <stdio.h>

int main() {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int total_cost = k * w * (w + 1) / 2;
    int borrowed_money = total_cost - n;
    if (borrowed_money < 0) {
        borrowed_money = 0;
    }
    printf("%d\n", borrowed_money);
    return 0;
}