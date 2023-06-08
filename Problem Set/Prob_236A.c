#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    gets(a);
    int len=strlen(a);
    if((len%2)==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}