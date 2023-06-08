#include <stdio.h>

int main() {
int a, b;
scanf("%d%d", &a, &b);
int limak_weight = a;
int bob_weight = b;
int years = 0;

while (limak_weight <= bob_weight) {
    years++;
    limak_weight *= 3;
    bob_weight *= 2;
}

printf("%d\n", years);

return 0;
}