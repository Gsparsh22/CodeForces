#include <stdio.h>
#include <string.h>

void main(){
    char a[101];
    gets(a);
    int len = strlen(a);
    int low = 0, up = 0;
    for(int i=0; i < len; i++){
        if(a[i] > 96 && a[i] < 123){
            low++;
        }
        if(a[i] > 64 && a[i] < 91){
            up++;
        }
    }
    if(low > up){
        for(int i=0; i < len; i++){
            if(a[i] > 64 && a[i] < 91){
                a[i] = a[i] + 32;
            }
        }
    }
    else if(low < up){
        for(int i=0; i < len; i++){
            if(a[i] > 96 && a[i] < 123){
                a[i] = a[i] - 32;
            }
        }
    }
    else if(low == up){
        for(int i=0; i < len; i++){
            if(a[i] > 64 && a[i] < 91){
                a[i] = a[i] + 32;
            }
        }
    }
    puts(a);
    return;
}