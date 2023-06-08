#include <stdio.h>
#include <string.h>

int main(){
    char a[102];
    gets(a);
    int len=strlen(a);

    for(int i=0; i<len; i++){
        if(a[i]=='h'){
            for(int j=i+1; j<len; j++){
                if(a[j]=='e'){
                    for(int k=j+1; k<len; k++){
                        if(a[k]=='l'){  
                            for(int l=k+1; l<len; l++){
                                if(a[l]=='l'){
                                    for(int m=l+1; m<len; m++){
                                        if(a[m]=='o'){
                                            printf("YES");
                                            return 0;
                                        }
                                    }
                                    printf("NO");
                                    return 0;
                                }
                            }
                            printf("NO");
                            return 0;
                        }
                    }
                    printf("NO");
                    return 0;
                }
            }
            printf("NO");
            return 0;
        }
    }
    printf("NO");
    return 0;
}