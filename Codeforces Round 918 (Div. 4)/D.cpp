#include<bits/stdc++.h>
using namespace std;

char vow[] = {'a', 'e'};
char con[] = {'b', 'c', 'd'};

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == 'a' || s[i] == 'e'){
                ans.push_back(s[i]);
                ans.push_back(s[i-1]);
                ans.push_back('.');
                i--;
            }
            else{
                ans.push_back(s[i]);
                ans.push_back(s[i-1]);
                ans.push_back(s[i-2]);
                ans.push_back('.');
                i -= 2;
            }
        }
        for(int i=ans.length()-1; i>=0; i--){
            cout << ans[i];
        }
    }
    return 0;
}