#include <iostream>
using namespace std;

void cin_arr(int arr[], int n) {
    for (int i = 1; i < n+1; i++) {
        cin >> arr[i];
    }
}

int max(int a, int b) {
    if(a == b) return a;
    return a > b ? a : b;
}

int max_arr(int arr[], int g) {
    int max = arr[1];
    for (int i = 2; i < g+1; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int sum_arr_a(int a[], int n, int k) {
    int sum_a = 0;
    if (k >= n) {
        for (int i = 1; i < n+1; i++) {
            sum_a += a[i];
        }
    } else {
        for (int i = 1; i < k+1; i++) {
            sum_a += a[i];
        }
    }
    return sum_a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n+1];
        int b[n+1];

        cin_arr(a, n);
        cin_arr(b, n);

        int sum_a = sum_arr_a(a, n, k);

        int exp = a[1];
        int level = 1;
        int temp = 0;

        for (int i = 0; i < k; i++) {
            int max_b = max_arr(b, level);
            temp = max(a[level+1], max_b);
            if (temp == a[level+1] && level < n - 1) {
                level++;
            }
            exp = exp + temp;
        }
        cout << max(exp,sum_a) << endl;
    }
    return 0;
}
