#include <bits/stdc++.h>
#include <cstdio>

typedef long long ll;

bool isCube(ll num){

    ll left(1), right(10007);
    while(left <= right){
        ll mid = (left + right) / 2;
        ll cube = mid * mid * mid;
        if(cube == num){return true;}
        else if(cube < num){left = mid + 1;}
        else if(cube > num){right = mid - 1;}
    }

    return false;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        bool ans(false);
        for(ll p = 1; p * p * p <= x; p++){
            ll y = x - p * p * p;
            if(isCube(y)){ans = true; break;}
        }

        puts(ans ? "YES" : "NO");
    }

}