#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2==1) cout << 0 << endl;
    else{
        int ans = 1;
        for(int i=0;i<n/2;i++) ans *= 2;
        cout << ans << endl;
    }
    return 0;
}