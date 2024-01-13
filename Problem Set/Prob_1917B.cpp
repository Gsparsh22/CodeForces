#include <bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void all(string s, int n, int length, unordered_set<string>& substrings) {
    for (int start = 0; start < length; ++start) {
        string currentSubstring = "";
        unordered_set<char> seenChars;
        for (int end = start; end < length; ++end) {
            if (seenChars.find(s[end]) == seenChars.end()) {
                currentSubstring += s[end];
                substrings.insert(currentSubstring);
                seenChars.insert(s[end]);
            } else {
                break;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int len = s.length();
        unordered_set<string> substrings;
        all(s, n, len, substrings);
        cout << substrings.size() << endl;
    }
    return 0;
}
