#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int a[7] = {0};
        for(int i=0; i<n; i++){
            a[s[i]-'A']++;
        }
        int ans = 0;
        for(int i=0; i<7; i++){
            if(a[i] < m){
                ans += m - a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}