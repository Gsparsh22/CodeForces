#include <bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n) {
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int profit = 0;
        long long int k = min(n, b);
        for (int i = 0; i <= k; i++) {
            long long int m = a * n - a * i + (b - 1) * i - (i * (i - 1)) / 2;
            //cout << m << endl;
            profit = max(profit, static_cast<long long int>(m));
        }
        cout << profit << endl;
    }
    return 0;
}
