#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, k = 0;
    int dif = 0;
    scanf("%d", &n);

    char a[52];
    int b[27] = {0};
    int len;

    for(int i=0; i<n; i++){
        scanf("%s", a);
        len = strlen(a);
        dif=0;

        for(int i=0; i<27; i++){
            b[i]=0;
        }

        for (int i = 0; i < len; i++) {
            k = a[i] - 'a' + 1;
            b[k]++;
        }

        /*
        for (int i = 1; i <= 26; i++) {
            printf("%d ", b[i]);
        }
        */
        

        for(int i=1; i<27; i++){
            if(b[i]>0){
                dif++;  
            }
        }


        
        if(len==2){
            printf("NO\n");
        }
        else if(len == 3){
            printf("NO\n");
        }
        else if(len%2 == 0 && len>2){
            if(dif >= 2){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else if(len%2 == 1 && len>3){
            if(b[(int)a[(len-1)/2]-96] == 1){
                if(dif>=3){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                if(dif>=2){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
    }
}