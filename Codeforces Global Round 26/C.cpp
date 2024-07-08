#include <bits/stdc++.h>
using namespace std;
#define UNSYNC ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(v) v.begin(),v.end()
#define inp(V,n) for(int i = 0; i<n; i++){int p; cin>>p; V.push_back(p);};
#define vi vector<int>
#define vvi vector<vector<int>>
#define poslup(i,a,b) for(int i = a; i<b; i++)
#define neglup(i,b,a) for(int i = b; i>a; i--)
#define ll long long

void mySoln()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    poslup(i,0,n) cin >> v[i];
    ll c = 0;
    vector<ll> dp1(n+1), dp2(n+1);
    ll ct = 0;
    poslup(i,0,n){
        dp1[i+1] = dp1[i] + v[i];
        dp2[i+1] = max(dp2[i] + v[i], abs(dp1[i] + v[i]));
        if(dp1[i] + v[i] == dp2[i+1]) ct++;
        if(abs(dp1[i] + v[i]) == dp2[i+1]) ct++;
        if(abs(dp2[i] + v[i]) == dp2[i+1]) ct++;
        if(dp2[i] + v[i] == dp2[i+1]) ct++;
        ct = ct%998244353;
    }
    cout << ct << '\n';
}

int main()
{
    UNSYNC
    int t;
    cin >> t;
    while(t--)
    {
        mySoln();
    }
    
    return 0;
    
}