#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    auto n = s.length();
    int a[26] = {0};
    for(int i=0; i<n; i++){
        a[s[i]-'a']++;
    }
    int odd = 0;
    for(int i=0; i<26; i++){
        if(a[i]%2==1){
            odd++;
        }
    }
    if(odd==0 || odd%2==1){
        cout << "First";
    }
    else{
        cout << "Second";
    }
    return 0;
}