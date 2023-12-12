#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = 1;
    int flag = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] >= a[i]) {
            flag++;
            if (flag > max) {
                max = flag;
            }
        } else {
            flag = 1;
        }
    }
    cout << max;
    return 0;
}
