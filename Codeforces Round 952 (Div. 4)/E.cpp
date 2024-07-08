#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int x, y, z, k;
        cin >> x >> y >> z >> k;
        long long int maxm = 0;
        for(int i = 1; i <= x; i++) {
            if (k % i != 0) continue;
            for(int j = 1; j <= y; j++) {
                if ((k / i) % j != 0) continue;
                long long int l = k / i / j;
                if (l <= z) {
                    long long int m = (x - i + 1) * (y - j + 1) * (z - l + 1);
                    maxm = max(maxm, m);
                }
            }
        }
        cout << maxm << '\n';
    }
    return 0;
}
