#include <stdio.h>

int if_even(int x){
    if(x==2){
        printf("NO");
    }
    else if(x%2==0){
        printf("YES");
    }
    else if(x<=0){
        printf("NO");
    }
    else{
        printf("NO");
    }
}

int main(){
    int a;
    scanf("%d",&a);
    if_even(a);
}