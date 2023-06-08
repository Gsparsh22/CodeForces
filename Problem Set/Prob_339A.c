#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    gets(a);
    int len=strlen(a);
    int temp;
    for(int i=0;i<len;i+=2){
        for(int j=0;j<len;j+=2){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    puts(a);
}