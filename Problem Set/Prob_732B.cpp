#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    cin_array(a,n);
    int count = 0;
    for(int i=1; i<n; i++){
        if(a[i]+a[i-1]<k){
            count += k-(a[i]+a[i-1]);
            a[i] += k-(a[i]+a[i-1]);
        }
    }
    cout<<count<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}