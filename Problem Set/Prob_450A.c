#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for(int i=0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i < n; i++){
        if((a[n] % m) != 0){
            a[n] = ( a[n] / m ) + 1;
        }
        else{
            a[n] = a[n] / m;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    
    int max = 0;
    int index = 0;
    for(int i=0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            index = i;
        }
        else if(a[i] == max){
            index = i;
        }
    }

    printf("%d", index + 1);
}


/*
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int current_child = 0;

    while (n > 1) {
        if (a[current_child] <= m) {
            n--;
        } else {
            a[current_child] -= m;
        }
        current_child = (current_child + 1) % n;
    }

    int last_child = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            last_child = i;
            break;
        }
    }

    printf("%d\n", last_child + 1);
    return 0;
}
*/