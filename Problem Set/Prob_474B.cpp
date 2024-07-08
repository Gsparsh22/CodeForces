#include <bits/stdc++.h>
using namespace std;

void cin_array(vector<int>& a, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    cin_array(a, n);

    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    cin_array(b, m);

    for (int i = 0; i < m; ++i) {
        int target = b[i];
        int j = lower_bound(prefix_sum.begin(), prefix_sum.end(), target) - prefix_sum.begin();
        cout << (j + 1) << endl;
    }

    return 0;
}
