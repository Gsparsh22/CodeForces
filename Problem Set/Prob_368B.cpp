#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    int dp[n];
    for(int i=0; i<n; i++) cin >> a[i];
    set<int> s;
    for(int i=n-1; i>=0; i--){
        s.insert(a[i]);
        dp[i] = s.size();
    }
    for(int i=0; i<m; i++){
        cin >> n;
        cout << dp[n-1] << endl;
    }
    return 0;
}