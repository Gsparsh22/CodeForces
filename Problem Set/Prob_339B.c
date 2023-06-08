#include <stdio.h>

int main(){
    long long int n,m;
    long long int a[100000];
    long long int ans=0;

    scanf("%lld %lld", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%lld", &a[i]);
    }

    ans=a[0]-1;

    for(int i=1; i<m; i++){
        if(a[i]>=a[i-1]){
            ans+=a[i]-a[i-1];
        }
        else{
            ans+=n-a[i-1]+a[i];
        }
    }

    printf("%lld", ans);
}