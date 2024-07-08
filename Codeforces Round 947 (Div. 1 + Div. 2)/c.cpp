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
        if(n==2){
            cout << min(a[0], a[1]) << endl;
        }
        else{
            a[n-1] = a[n-2];
            a[0] = a[1];
            sort(a, a+n);
            cout << a[n-1] << endl;
        }
    }
    return 0;
}