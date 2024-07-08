#include <bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        cin_array(a.data(), n);
        
        for (int i = 0; i < n; i++) {
            a[i] = a[i] - i - 1;
        }

        sort(a.begin(), a.end());

        long long ans = 0;
        long long count = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            } else {
                ans += count * (count - 1) / 2;
                count = 1;
            }
        }
        ans += count * (count - 1) / 2;

        cout << ans << endl;
    }
    return 0;
}