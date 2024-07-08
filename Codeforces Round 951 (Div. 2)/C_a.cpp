#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

long long int lcm(long long int a[], long long int n){
    long long int ans = 1;
    for(long long int i=0; i<n; i++){
        ans = (ans * a[i]) / __gcd(ans, a[i]);
    }
    return ans;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        long long int l = lcm(a, n);
        long long int ans[n];
        for(long long int i=0; i<n; i++){
            ans[i] = round((double)l / a[i]);
        }
        long long int sum = 0;
        for(long long int i=0; i<n; i++){
            sum += ans[i];
        }
        if(sum < l){
            for(long long int i=0; i<n; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
