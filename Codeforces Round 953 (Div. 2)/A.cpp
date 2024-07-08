#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        sort(a, a+(n-1));
        cout << a[n-1] + a[n-2] << endl;
    }
    return 0;
}