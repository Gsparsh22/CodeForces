#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool isValidSum(long long int x) {
    string s = to_string(x);
    long long int n = s.length();

    vector<long long int> carries(n, 0);

    for (long long int i = n - 1; i >= 0; --i) {
        long long int digit = s[i] - '0';
        
        
        if (i < n - 1) {
            digit -= carries[i + 1];
        }

        
        bool valid = false;
        for (long long int d1 = 5; d1 <= 9; ++d1) {
            for (long long int d2 = 5; d2 <= 9; ++d2) {
                long long int sum = d1 + d2;
                if (sum % 10 == digit) {
                    carries[i] = sum / 10;  
                    valid = true;
                    break;
                }
            }
            if (valid) break;
        }

        
        if (!valid) return false;
    }
    
    return true;
}

int main() {
    long long int t;
    cin >> t;
    while(t--){
        long long int x;
        cin >> x;

        if (isValidSum(x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
