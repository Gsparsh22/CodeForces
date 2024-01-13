#include <bits/stdc++.h>
using namespace std;

void cin_array(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> a(n), b(k);
        cin_array(a, n);
        cin_array(b, k);

        int ans = 0;
        for (int i = 0; i < d && i <= 2 * n; i++) {
            int temp = 0;
            for (int j = 0; j < n; j++) {
                temp += (a[j] == j + 1);
            }
            temp += (d - i - 1) / 2;

            if (temp > ans) {
                ans = temp;
            }

            for (int j = 0; j < b[i % k]; j++) {
                a[j]++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}