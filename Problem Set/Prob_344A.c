#include <stdio.h>

int main(){
    int n=0;
    int a=0;
    int b=0;
    int c=0;


    scanf("%d",&n);

    scanf("%d",&b);
    c++;
    
    for(int i=0; i<n-1; i++){
        scanf("%d",&a);
        if(a==b){
            continue;
        }
        else if(a!=b){
            c++;
        }
        b=a;
    }

    printf("%d",c);
}