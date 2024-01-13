#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long pos = 0, neg = 0;

        for(int i = 0; i < n; i++){
            if (a[i] > 0) {
                pos += a[i];
                neg = max(neg, neg + a[i]);
            } else {
                swap(pos, neg);
                neg += a[i];
            }
        }

        cout << max(pos, neg) << endl;
    }

    return 0;
}
