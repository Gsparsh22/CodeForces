#include <stdio.h>
#include <math.h>

int main() {
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    double b;
    b = (ceil(n / a)) * (ceil(m / a));
    printf("%.0f", b);
    return 0;
}