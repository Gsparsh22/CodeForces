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
        int a_in;
        cin >> a_in;
        for(int i=n-1; i>=0; i++){
            a[i] = a_in%10;
            a_in /= 10;
        }
        /*code*/
    }
    return 0;
}