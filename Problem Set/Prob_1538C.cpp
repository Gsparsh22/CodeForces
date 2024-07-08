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
        long long int n, l, r;
        cin >> n >> l >> r;
        long long int a[n];
        cin_array(a, n);
        sort(a, a+n);
        long long int j=n-1;
        while(j>=0 && a[j]>r){
            j--;
        }
        long long int ans = 0;
        for(long long int i=0; i<j; i++){
            long long int x = l-a[i];
            long long int y = r-a[i];
            long long int low = lower_bound(a+i+1, a+j+1, x) - a;
            long long int high = upper_bound(a+i+1, a+j+1, y) - a;
            ans += high - low;
        }
        cout << ans << endl;
    }
    return 0;
}