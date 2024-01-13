#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countPairs(int n, vector<int>& arr) {
    unordered_map<int, long long> freq;

    for (int i = 1; i <= n; ++i) {
        if (arr[i - 1] - 1 < n) {
            freq[arr[i - 1] - 1]++;
        }
    }

    long long result = 0;

    for (int i = 1; i <= n; ++i) {
        result += freq[i - 1] * (freq[i - 1] - 1) / 2;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        long long result = countPairs(n, arr);
        cout << result << endl;
    }

    return 0;
}
