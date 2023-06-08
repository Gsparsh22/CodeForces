#include <stdio.h>

int main(){
    int n, cnt = 0;
    char prev, cur;
    scanf("%d", &n);
    getchar();
    scanf("%c", &prev);
    for (int i = 1; i < n; i++){
        scanf("%c", &cur);
        if (cur == prev){
            cnt++;
        }
        prev = cur;
    }
    printf("%d\n", cnt);
    return 0;
}
