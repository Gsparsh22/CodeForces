#include <stdio.h>

int main(){
    int n,t;

    scanf("%d %d", &n, &t);

    int a[n];

    for(int i=1; i<=n-1; i++){
        scanf("%d", &a[i]);
    }

    int flag=a[1];

    for(int i=1; i<n; i++){
        if(flag==t){
            printf("YES");
            break;
        }
        else if(flag>t){
            printf("NO");
            break;
        }
        flag=i+a[i];
    }

}