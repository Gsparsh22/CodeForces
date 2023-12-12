#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    map<string, int> m;
    for(int i=0; i<n; i++){
        cin >> s;
        m[s]++;
    }
    int max = 0;
    for(auto i: m){
        if(i.second > max){
            max = i.second;
            s = i.first;
        }
    }
    cout << s << endl;    
}