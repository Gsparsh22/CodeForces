#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d", &a);

    for(int i=1; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                for(int l=0; l<10; l++){
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                        b=1000*i+100*j+10*k+l;
                        if(b>a){
                            printf("%d",b);
                            return 0;
                        }
                    }    
                }
            }
        }
    }
}