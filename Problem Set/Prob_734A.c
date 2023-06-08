#include <stdio.h>

int main(){
    int a=0;
    int d=0;
    int n;
    scanf("%d",&n);
    char inp;

    for(int i=0;i<n+1;i++){
        scanf("%c" ,&inp);
        if(inp == 'A'){
            a++;
        }
        else if(inp == 'D'){
            d++;
        }
    }

    //printf("%d %d",a,d);

    if(a>d){
        printf("Anton");
        return 0;
    }
    if(a<d){
        printf("Danik");
        return 0;
    }
    else{
        printf("Friendship");
        return 0;
    }
}