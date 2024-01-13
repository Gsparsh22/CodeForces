#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[26] = {0};
        int ans = 0;
        for(int i = 0; i < n; i++){
            arr[s[i] - 'A']++;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] > i){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}