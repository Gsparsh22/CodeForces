#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    float k = 0;
    float sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &k);
        sum += k;
    }

    float average = sum / n;
    printf("%.4f", average);

    return 0;
}
