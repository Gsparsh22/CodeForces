#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        if(a>=2*b){
            cout<<b<<endl;
            continue;
        }
        int ans = (a+b)/3;
        cout<<ans<<endl;
    }
    return 0;
}