#include <stdio.h>
#include <math.h>

int main(){
    int n=5;
    int a[n][n];
    int c,d;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]!=0){
                c=i;
                d=j;
            }
        }
    }

    int ans=fabs(((n-1)/2)-c)+fabs(((n-1)/2)-d);
    printf("%d",ans);

}

/*#include <stdio.h>

int main(){
    int a[5][5];
    int c,d;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]!=0){
                c=i;
                d=j;
            }
        }
    }

    switch(c){
        case 0: c=2;
                break;
        case 1: c=1;
                break;
        case 2: c=0;
                break;
        case 3: c=1;
                break;
        case 4: c=2;
                break;
    }

    switch(d){
        case 0: d=2;
                break;
        case 1: d=1;
                break;
        case 2: d=0;
                break;
        case 3: d=1;
                break;
        case 4: d=2;
                break;
    }

    printf("%d",c+d);
    return 0;
}*/