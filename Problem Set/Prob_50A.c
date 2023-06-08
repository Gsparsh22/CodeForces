#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int ans;
    if((n%2)!=0 && (m%2)!=0){
        ans=((n*m)-1)/2;
    }
    else{
        ans=((n*m))/2;
    }
    printf("%d",ans);
}