#include <stdio.h>

int main() {
    int n, k, scores[50], count = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    for(int i = 0; i < n; i++) {
        if(scores[i] >= scores[k-1] && scores[i] > 0) {
            count++;
        }
        else {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}