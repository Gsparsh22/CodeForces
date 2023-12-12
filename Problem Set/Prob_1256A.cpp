#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        long long a, b, n, S;
        cin >> a >> b >> n >> S;
        if(S%n<=b && S<=a*n+b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}