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
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        sort(a, a+n);
        int ans = abs(a[n-1]-a[0]) + abs(a[n-1]-a[1]) + abs(a[n-2]-a[0]) + abs(a[n-2]-a[1]);
        cout << ans << endl;
    }
    return 0;
}