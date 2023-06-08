#include <stdio.h>

int lucky_counter(int a){
    int counter;
    int b;
    b=a%10;
    if(b==4 || b==7){
        counter++;
    }
    lucky_counter(a/10);
    return counter;
}

int lucky_checker(int a){
    int b;
    b=a%10;
    if(b==4 || b==7){
        lucky_checker(a/10);
    }
    else{
        return 0;
    }
    return 1;
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",lucky_counter(a));
    if(lucky_checker(lucky_counter(a))){
        printf("YES");
    }
    else{
        printf("NO");
    }
}