#include <iostream>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

bool issorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);

        if(n<=2){
            cout << "YES" << endl;
            continue;
        }
        
        if (issorted(a, n)) {
            cout << "YES" << endl;
            continue;
        }
        
        if (a[0] < a[n - 1]) {
            cout << "NO" << endl;
            continue;
        }
        
        int peak = 0;
        for(int i=1; i<n; i++){
            if(a[i] > a[i+1]){
                peak++;
            }
        }
        if(peak > 1){
            cout << "NO" << endl;
            continue;
        }

        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                if (a[i] > a[0] && a[i + 1] < a[n - 1]) {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
        }
        
        if (!flag) {
            cout << "NO" << endl;
        }
    }
    return 0;
}