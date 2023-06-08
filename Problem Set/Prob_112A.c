#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    int len = strlen(str1);
    for(int i = 0; i < len; i++) {
        if(tolower(str1[i]) < tolower(str2[i])) {
            printf("-1\n");
            return 0;
        }
        else if(tolower(str1[i]) > tolower(str2[i])) {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}