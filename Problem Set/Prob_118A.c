#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[102];
    fgets(str, 102, stdin);
    int len = strlen(str);

    for (int i = 0; i < len-1; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        }
        printf("%c%c", '.', tolower(str[i]));
    }
    printf("\n");
    return 0;
}