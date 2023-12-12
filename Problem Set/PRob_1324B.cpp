#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        label:
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j] && abs(i-j)>1){
                    cout << "YES" << endl;
                    goto label;
                }
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}