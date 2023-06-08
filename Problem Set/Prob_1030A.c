#include <stdio.h>

int main(){
    int n;
    int in;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&in);
        if(in == 1){
            printf("HARD");
            return 0;
        }
    }

    printf("EASY");
}