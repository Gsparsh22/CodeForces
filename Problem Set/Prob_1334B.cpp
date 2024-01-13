#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long int ans = 0;
        long long int sum = 0;
        for(int i=n-1;i>=0;i--){
            sum += a[i];
            if(sum/(n-i) >= x){
                ans = n-i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}