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
        
        for(int i=0; i<n; i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }

        for(int i=0; i<n; i++){
            if(s[i] == s[i+1]){
                s[i] = '0';
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                s.erase(i, 1);
                i--;
            }
        }


        if(s.size() > 4){
            cout << "NO" << endl;
            continue;
        }

        if(s == "meow"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}