#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int ans = 0;
        // for(int i = n-1; i >0; i-=2){
        //     ans += 2*(i)*(i);
        // }
        for(long long int i = 1; i <= n/2; i++){
            ans += 8*i*i;
        }
        cout << ans << endl;
    }
    return 0;
}