#include <stdio.h>

int main(){
    int n=0;
    int a=0;
    int k=0;
    int p=0,q=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        p=0;
        q=0;
        k=0;
        scanf("%d%d",&p,&q);
        k=q-p;
        if(k > 1){
            a++;
        }
    }
    printf("%d",a);
}