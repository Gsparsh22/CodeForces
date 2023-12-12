#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int ans = min(n/k,m);
        m -= ans;
        k--;
        if(m>0){
            ans -= ceil((double)m/k);
        }
        cout << ans << endl;
    }
    return 0;
}