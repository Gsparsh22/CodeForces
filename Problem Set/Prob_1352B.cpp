#include <iostream>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int oe(int n) {
    return n % 2;
}

void p2(int k) {
    for (int i = 0; i < k - 1; i++) {
        cout << "2 ";
    }
}

void p1(int k) {
    for (int i = 0; i < k - 1; i++) {
        cout << "1 ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (oe(n) == 1 && oe(k) == 0) {
            cout << "NO" << endl;
        } else if (oe(n) == 0 && oe(k) == 1) {
            if (n < k * 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                p2(k);
                cout << n - (k - 1) * 2 << endl;
            }
        } else if (oe(n) == 0 && oe(k) == 0) {
            if (n < k) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                p1(k);
                cout << n - (k - 1) << endl;
            }
        } else if (oe(n) == 1 && oe(k) == 1) {
            if (n < k * 2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                p2(k - 1);
                cout << n - (k - 1) * 2 << endl;
            }
        } else {
            if (n < k * 3) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                p1(k - 1);
                cout << n - (k - 1) << endl;
            }
        }
    }
    return 0;
}