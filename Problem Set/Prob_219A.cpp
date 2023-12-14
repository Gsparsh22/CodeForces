#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s;
    cin>>k>>s;
    int n = s.length();
    int a[26] = {0};
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]%k!=0){
            cout<<-1<<endl;
            return 0;
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<26;j++){
            for(int l=0;l<a[j]/k;l++){
                cout<<(char)('a'+j);
            }
        }
    }
    cout<<endl;
    return 0;
}