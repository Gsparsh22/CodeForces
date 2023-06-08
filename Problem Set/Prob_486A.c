#include <stdio.h>
#include <math.h>

int main(){
    long long n=0;
    scanf("%lld",&n);

    if(fmod(n,2)==0){
        printf("%lld",n/2);
        return 0;
    }

    else{
        printf("%lld",((n-1)/2)-n);
        return 0;
    }
}