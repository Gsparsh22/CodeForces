#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int dist(string s){
    int len = s.length();
    int al[26] = {0};
    for(int i=0; i<len; i++){
        al[s[i]-'a'] = 1;
    }
    int count = 0;
    for(int i=0; i<26; i++){
        if(al[i]==1){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int max = 0;
        string s1 = "";
        string s2 = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                s1 += s[j];
            }
            for(int j=i; j<n; j++){
                s2 += s[j];
            }
            int d = dist(s1)+dist(s2);
            if(d>max){
                max = d;
            }
        }
        cout << max << endl;
    }
    return 0;
}