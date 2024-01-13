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
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        for(int i=0; i<n; i=i+2){
            a[i] -= 2*a[i];
        }
        int sum = 0;
        for(int l=0; l<n-1; l++){
            sum = a[l];
            for(int r=l+1; r<n; r++){
                sum += a[r];
                if(sum == 0){
                    cout << "YES" << endl;
                    goto label;
                }
            }
        }
        cout << "NO" << endl;
        label:;
    }
    return 0;
}