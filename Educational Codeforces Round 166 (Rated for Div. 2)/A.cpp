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

        bool flag = true;

        for(int i=0; i<n-1; i++){
            if((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
                flag = false;
                break;
            }
            if((s[i+1] < 'a' || s[i+1] > 'z') && (s[i+1] < '0' || s[i+1] > '9')){
                flag = false;
                break;
            }
            if(s[i+1] < s[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}