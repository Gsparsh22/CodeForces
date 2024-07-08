#include <iostream>
#include <vector>
using namespace std;

bool isNonDecreasing(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

bool hasNonDecreasingCycle(const vector<int>& arr) {
    int n = arr.size();
    vector<int> rotatedArr(n);
    
    for (int start = 0; start < n; ++start) {
        for (int i = 0; i < n; ++i) {
            rotatedArr[i] = arr[(start + i) % n];
        }
        if (isNonDecreasing(rotatedArr)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    if (hasNonDecreasingCycle(arr)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    
    return 0;
}