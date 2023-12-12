#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n, k;
    while(t--){
        cin >> n >> k;
        int ans = 0;
        if(n > k){
            if(n%k == 0){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        else{
            if(k%n == 0){
                ans = k/n;
            }
            else{
                ans = k/n + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}