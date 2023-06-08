#include <stdio.h>
#include <string.h>

int c = 0;
char out[102][102];

void convert(char a[]){
    int len;
    len = strlen(a);
    if(len<11){
        strcpy(out[c++],a);
    }
    else{
        char b[102];
        sprintf(b,"%c%d%c",a[0],len-2,a[len-1]);
        strcpy(out[c++],b);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        char str[102];
        fgets(str, 102, stdin);
        str[strcspn(str, "\n")] = '\0';
        convert(str);
    }
    for(int i=0;i<c;i++){
        puts(out[i]);
    }
    return 0;
}
