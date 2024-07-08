#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        sort(a, a+n);
        long long int count[a[n-1]+1] = {0};
        for(long long int i=0; i<n; i++){
            count[a[i]]++;
        }
        long long int dp[a[n-1]+1] = {0};
        dp[0] = 0;
        dp[1] = count[1];
        for(long long int i=2; i<=a[n-1]; i++){
            dp[i] = max(dp[i-1], dp[i-2] + i*count[i]);
        }
        cout << dp[a[n-1]] << endl;
    
    return 0;
}