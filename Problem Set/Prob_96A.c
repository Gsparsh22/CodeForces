#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char a[102];

    gets(a);

    len=strlen(a);

    for(int i=0; i<len; i++){
        if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6]){
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    
    return 0;
}