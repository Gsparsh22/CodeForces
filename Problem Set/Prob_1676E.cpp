#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        int a[n];
        cin_array(a, n);
        int b[n] = {0};
        int x[q];
        cin_array(x, q);

        sort(a, a+n);

        int sum = 0;
        for(int i=0; i<n; i++){
            b[i] = a[i] + sum;
            sum += a[i];
        }

        
    }
    return 0;
}