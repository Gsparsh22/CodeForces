#include <iostream>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void cout_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    cin_array(a, n);

    int max_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp[n];
            for (int k = 0; k < n; k++) {
                temp[k] = a[k];
            }

            for (int k = i; k <= j; k++) {
                temp[k] = 1 - temp[k];
            }

            int count = 0;
            for (int k = 0; k < n; k++) {
                if (temp[k] == 1) {
                    count++;
                }
            }

            if (count > max_count) {
                max_count = count;
            }
        }
    }

    cout << max_count << endl;
    return 0;
}
