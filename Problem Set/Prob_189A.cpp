#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(n < min(a, min(b, c))){
        cout << 0 << endl;
        return 0;
    }
    int dp[n+a+b+c] = {0};
    dp[a] = 1;
    dp[b] = 1;
    dp[c] = 1;
    for(int i=1; i<=n; i++){
        if(i-a >= 0 && dp[i-a] != 0){
            dp[i] = max(dp[i], dp[i-a] + 1);
        }
        if(i-b >= 0 && dp[i-b] != 0){
            dp[i] = max(dp[i], dp[i-b] + 1);
        }
        if(i-c >= 0 && dp[i-c] != 0){
            dp[i] = max(dp[i], dp[i-c] + 1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}