#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    string a,b;
    map<string,string> mp;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        if(a.size() <= b.size()){
            mp[a] = a;
            mp[b] = a;
        }
        else{
            mp[a] = b;
            mp[b] = b;
        }
    }
    for(int i=0; i<n; i++){
        cin >> a;
        cout << mp[a] << " ";
    }
    cout << endl;
    return 0;
}