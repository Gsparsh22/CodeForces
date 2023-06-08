#include <stdio.h>

int main(){
    int x=0;
    int ite;
    scanf("%d",&ite);
    char a[4];
    for(int i=0;i<ite;i++){
        scanf("%s", a);
        if(a[0]=='+'){
            ++x;
        }
        if(a[0]=='-'){
            --x;
        }
        if(a[2]=='+'){
            x++;
        }
        if(a[2]=='-'){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}