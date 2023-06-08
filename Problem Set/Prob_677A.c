#include <stdio.h>
#include <string.h>

int main(){
    int n=0, h=0;
    scanf("%d %d", &n, &h);
    int a[n];
    int w=0;

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] <= h){
            w = w + 1;
        }
        if(a[i] > h){
            w = w + 2;
        }
    }

    printf("%d", w);
    return 0;
}
