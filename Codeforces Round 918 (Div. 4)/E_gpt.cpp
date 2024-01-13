#include <bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n) {
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

long long int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);

        for (long long int i = 0; i < n; i = i + 2) {
            a[i] -= 2 * a[i];
        }

        unordered_set<long long int> prefixSumSet;
        long long int prefixSum = 0;
        bool foundZeroSum = false;

        for (long long int i = 0; i < n; i++) {
            prefixSum += a[i];

            if (prefixSum == 0 || prefixSumSet.count(prefixSum) > 0) {
                foundZeroSum = true;
                break;
            }

            prefixSumSet.insert(prefixSum);
        }

        if (foundZeroSum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}