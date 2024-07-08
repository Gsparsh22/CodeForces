#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    cin_array(a, n);
    cin_array(b, m);
    sort(a, a+n);
    for(int i=0; i<m; i++){
        int ans = upper_bound(a, a+n, b[i]) - a;
        cout << ans << " ";
    }
    return 0;
}