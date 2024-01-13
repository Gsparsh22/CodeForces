#include<bits/stdc++.h>
using namespace std;

int cardsfrom_H(int h){
    return (3*h*(h-1)/2)+(2*h);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        while(n > 1){
            int h = 1;
            while(cardsfrom_H(h) <= n){
                h++;
            }
            n = n - cardsfrom_H(h-1);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}