#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[k] = {0};
    cin_array(a, n);
    sort(a, a+n);
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            a[i] = 0;
        }
    }
    sort(a, a+n);

    int j=0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            b[j] = a[i];
            j++;
        }
    }

    int sum = 0;

    for(int i=0; i<k ; i++){
        if(b[i] == 0){
            cout << 0 << endl;
        }
        else{
            cout << b[i] << endl;
            if(b[i+1] == 0){
                continue;
            }
            sum = sum + b[i];
            b[i+1] = b[i+1] - sum;
        }
    }
    return 0;
}