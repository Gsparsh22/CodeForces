#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(m>n) cout << -1 << endl;
    else{
        int ans = (n+1)/2;
        while(ans%m!=0) ans++;
        cout << ans << endl;
    }
    return 0;
}