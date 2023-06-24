#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    for (int testCase = 0; testCase < t; testCase++) {
        int n, m;
        scanf("%d %d", &n, &m);
 
        long long int a_sum = 0;
        long long int b_sum = 0;
 
        for (int i = 0; i < n; i++) {
            long long int num;
            scanf("%lld", &num);
            a_sum += num;
        }
 
        for (int i = 0; i < m; i++) {
            long long int num;
            scanf("%lld", &num);
            b_sum += num;
        }
 
        if (a_sum > b_sum) {
            printf("Tsondu\n");
        } else if (a_sum < b_sum) {
            printf("Tenzing\n");
        } else {
            printf("Draw\n");
        }
    }
 
    return 0;
}