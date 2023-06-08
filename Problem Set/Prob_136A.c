#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int b[n+1];

    for(int i=1; i<=n; i++){
        scanf("%d",&a[i]);
        b[a[i]]=i;
    }

    for(int i=1; i<=n; i++){
        printf("%d ",b[i]);
    }
    
}