#include<bits/stdc++.h>
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
        int n, m;
        cin >> n >> m;
        int u[m], v[m], w[m];
        for(int i=0; i<m; i++){
            cin >> u[i] >> v[i] >> w[i];
        }
        int s[n];
        cin_array(s, n);
    }
    return 0;
}