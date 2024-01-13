#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find_x(int n, int k, vector<int>& sequence) {
    sort(sequence.begin(), sequence.end());

    if (k == 0) {
        cout << (sequence[0] > 1 ? sequence[0] - 1 : -1) << endl;
        return;
    }

    if (k == n) {
        cout << sequence[n - 1] << endl;
        return;
    }

    if (sequence[k - 1] == sequence[k]) {
        cout << "-1" << endl;
        return;
    }

    cout << sequence[k - 1] << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    find_x(n, k, sequence);

    return 0;
}
