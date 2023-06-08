#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, t = 0;
    scanf("%d %d", &n, &t);
    char l[n];

    
    for (int i = 0; i < n; i++) {
        scanf(" %c", &l[i]); 
    }

    
    for (int i = 0; i < t; i++) {
        
        for (int j = 0; j < n - 1; j++) {
            if (l[j] == 'B' && l[j + 1] == 'G') {
                l[j] = 'G';
                l[j + 1] = 'B';
                j++;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        printf("%c", l[i]);
    }

    return 0;
}
