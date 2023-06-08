#include <stdio.h>
#include <string.h>

#define MAXN 1001

int n, mat[MAXN][MAXN], f[MAXN][MAXN], p[MAXN][MAXN];

int calc(int x) {
    int res = 0;
    while(x % 10 == 0) {
        res++;
        x /= 10;
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            scanf("%d", &mat[i][j]);
    memset(p, 0, sizeof(p));
    f[1][0] = f[0][1] = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            f[i][j] = 1e9; // initialize with a large value instead of 0 to avoid overflow
            int tmp = calc(mat[i][j]);
            if(i > 1 && f[i - 1][j] + tmp < f[i][j]) { // add tmp to the cost of going up or left
                f[i][j] = f[i - 1][j] + tmp;
                p[i][j] = 1;
            }
            if(j > 1 && f[i][j - 1] + tmp < f[i][j]) {
                f[i][j] = f[i][j - 1] + tmp;
                p[i][j] = 2;
            }
        }
    printf("%d\n", f[n][n]);
    int x = n, y = n, cnt = 0;
    char ans[MAXN * 2];
    while(x > 0 && y > 0) {
        if(p[x][y] == 1) {
            ans[cnt++] = 'D';
            x--;
        }
        else {
            ans[cnt++] = 'R';
            y--;
        }
    }
    ans[cnt] = '\0';
    for(int i = cnt - 1; i >= 0; i--)
        printf("%c", ans[i]);
    return 0;
}
