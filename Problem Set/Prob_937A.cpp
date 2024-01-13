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
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            a[i] = 0;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}