#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        unordered_set<string> m;
        for(int i=0; i<len; i++){
            for(int j=1; i+j<=len; j++){
                string sub = s.substr(i, j);
                if(sub != "a"){
                    m.insert(sub);
                }
            }
        }
        cout << m.size() << endl;
    }

    return 0;
}