#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int max_value = 0;

    int expression1 = (a + b) * c;
    max_value = max(max_value, expression1);

    int expression2 = a + (b * c);
    max_value = max(max_value, expression2);

    int expression3 = a * (b + c);
    max_value = max(max_value, expression3);

    int expression4 = a * b * c;
    max_value = max(max_value, expression4);

    int expression5 = a + b + c;
    max_value = max(max_value, expression5);

    int expression6 = (a * b) + c;
    max_value = max(max_value, expression6);

    printf("%d\n", max_value);

    return 0;
}
