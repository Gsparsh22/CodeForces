#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int a[n + 1]{0}, b[n + 1]{0}, pre_a[n + 1]{0}, pre_b[n + 1]{0}, pre_max[n + 1]{0};
        for (int i = 1; i <= n; i++){
            cin >> a[i], pre_a[i] = pre_a[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++){
            cin >> b[i];
            pre_b[i] = pre_b[i - 1] + b[i], pre_max[i] = max(pre_max[i - 1], b[i]);
        }
        int maxn = 0;
        if (k <= n){
            for (int i = 1; i <= k; i++){
                maxn = max(pre_a[i] + (k - i) * pre_max[i], maxn);
            }
        }
        else{
            for (int i = 1; i <= n; i++){
                maxn = max(pre_a[i] + (k - i) * pre_max[i], maxn);
            }
        }
        cout << maxn << endl;
    }
    return 0;
}