#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'a' || s[i] == 'e') {
                ans.push_back(s[i]);
                if (i - 1 >= 0) {
                    ans.push_back(s[i - 1]);
                }
                ans.push_back('.');
                i--;
            }
            else {
                ans.push_back(s[i]);
                if (i - 1 >= 0) {
                    ans.push_back(s[i - 1]);
                }
                if (i - 2 >= 0) {
                    ans.push_back(s[i - 2]);
                }
                ans.push_back('.');
                i -= 2;
            }
        }
        for (int i = ans.length() - 2; i >= 0; i--) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}