#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                int j = n/i;
                for(int k=2; k<=sqrt(j); k++){
                    if(j%k == 0 && k != i && j/k != i && j/k != k){
                        cout << "YES" << endl;
                        cout << i << " " << k << " " << j/k << endl;
                        goto label;
                    }
                }
            }
        }
        cout << "NO" << endl;
        label:;
    }
    return 0;
}