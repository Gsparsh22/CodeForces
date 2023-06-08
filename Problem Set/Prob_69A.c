#include <stdio.h>

int main(){
    int n=0;
    int s1=0 ,s2=0 ,s3=0;
    int a=0 ,b=0 ,c=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        a=0;
        b=0;
        c=0;
        scanf("%d %d %d", &a,&b,&c);
        s1=s1+a;
        s2=s2+b;
        s3=s3+c;
    }

    if(s1==0 && s2==0 && s3==0){
        printf("YES");  
        return 0;
    }
    else{
        printf("NO");
        return 0;
    }
}