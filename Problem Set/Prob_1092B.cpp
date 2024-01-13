#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    cin_array(a, n);
    sort(a, a+n);
    int ans = 0;
    for(int i=0; i<n-1; i+=2){
        ans += a[i+1] - a[i];
    }
    cout << ans << endl;
    return 0;
}