#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int sum_sub_array(int a[], int l, int r){
    int sum = 0;
    for(int i=l; i<=r; i=i+2){
        sum += a[i];
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        for(int l=0; l<n-1; l++){
            for(int r=l+1; r<n; r++){
                int sum1 = sum_sub_array(a, l, r);
                int sum2 = sum_sub_array(a, l+1, r);
                if(sum1 == sum2){
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