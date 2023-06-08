#include <stdio.h>

int main(){
    int p=0, flag=0;
    int st=0 ;

    scanf("%d",&st);

    int a[st],b[st];

    for(int i=1; i<=st; i++){
        scanf("%d %d",&a[i],&b[i]);
        p=p-a[i];
        p=p+b[i];
        if(p>=flag){
            flag=p;
        }
    }

    printf("%d",flag);
}