#include <stdio.h>

int main(){
    int s,n;
    int temp=0;

    scanf("%d %d", &s, &n);

    int x[n], y[n];

    for(int i=0; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]>x[j]){
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;

                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(s>x[i]){
            s+=y[i];
        }
        else{
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}