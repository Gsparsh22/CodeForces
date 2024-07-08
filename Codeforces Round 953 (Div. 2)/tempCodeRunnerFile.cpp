#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int profit;
        if(n%2==0){
            profit = (n/2)*min(2*a, b);
        }
        else{
            profit = (n/2)*min(2*a, b) + a;
        }
    }
    return 0;
}