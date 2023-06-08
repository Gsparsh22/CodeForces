#include <stdio.h>
#include <string.h>

int main(){
    char s[110],t[110];

    scanf("%s %s",&s,&t);

    int len_s=strlen(s);
    int len_t1=strlen(t);

    //printf("%d\n",len_s);

    if (len_s != len_t1){
        printf("NO");
        return 0;
    }

    for(int i=0; i<len_s; i++){
        if(s[i]!=t[len_t1-i-1]){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}