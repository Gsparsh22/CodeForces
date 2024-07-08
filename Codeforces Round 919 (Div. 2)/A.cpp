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
        int a[n], x[n];
        int neg[n] = {0};
        int pos[n] = {0};
        int zero[n] = {0};
        for(int i=0; i<n; i++){
            cin >> a[i] >> x[i];
            if(a[i] == 1){
                neg[i] = x[i];
            }
            else if(a[i] == 2){
                pos[i] = x[i];
            }
            else if(a[i] == 3){
                zero[i] = x[i];
            }
        }
        sort(neg, neg+n);
        sort(pos, pos+n);
        sort(zero, zero+n);
        int ans = 0;
        int start = neg[n-1];
        int end = 0;
        for(int i=0; i<n; i++){
            if(pos[i]!= 0){
                end = pos[i];
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(zero[i] >= start && zero[i] <= end){
                ans--;
            }
        }
        ans += end - start + 1;
        if(ans < 0){
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}