#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int m;
    cin >> m;
    int l, r;
    int n = s.length();
    int dp[n];
    dp[0] = 0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) dp[i] = dp[i-1] + 1;
        else dp[i] = dp[i-1];
    }
    for(int i=0; i<m; i++){
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }
    return 0;
}