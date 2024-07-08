#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    ll n, d;
    cin >> n >> d;
    pair<ll, ll> a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    return 0;
}