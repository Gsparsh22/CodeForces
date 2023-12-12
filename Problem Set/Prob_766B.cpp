#include <iostream>
#include <algorithm>

using namespace std;

int isTriangle(int a, int b, int c) {
    return (a + b > c);
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a, a + n);
    
    for (int i = 0; i < n - 2; i++) {
        if (isTriangle(a[i], a[i + 1], a[i + 2])) {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}
