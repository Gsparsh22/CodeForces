#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> r(n);
        for(int i = 0; i < n; i++){
            cin >> r[i];
        }
        int m;
        cin >> m;
        vector<int> b(m);
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        int max_r = 0, max_b = 0, sum_r = 0, sum_b = 0;
        for(int i = 0; i < n; i++){
            sum_r += r[i];
            max_r = max(max_r, sum_r);
        }
        for(int i = 0; i < m; i++){
            sum_b += b[i];
            max_b = max(max_b, sum_b);
        }
        cout << max_r + max_b << endl;
    }
    return 0;
}