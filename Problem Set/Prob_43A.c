#include <stdio.h>

int main() {
    int n;
    char a[11];
    char b[11];
    scanf("%d", &n);
    int count_a = 1;
    int count_b = 0;

    scanf("%s", a);
    for(int i=0; i<n-1; i++){
        scanf("%s", b);
        if(strcmp(a, b) == 0){
            count_a++;
        }
        else{
            count_b++;
        }
    }

    if(count_a > count_b){
        printf("%s\n", a);
    }
    else if(count_a == count_b){
        printf("DRAW");
    }
    else{
        printf("%s\n", b);
    }
}