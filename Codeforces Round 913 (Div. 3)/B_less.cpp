#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string keys;
        cin >> keys;

        vector<char> result;

        for (int i = 0; i < keys.length(); i++) {
            if (keys[i] != 'B' && keys[i] != 'b') {
                result.push_back(keys[i]);
            } else if (keys[i] == 'B') {
                // Remove the last uppercase letter if any
                int lastPos = result.size() - 1;
                while (lastPos >= 0 && result[lastPos] >= 'A' && result[lastPos] <= 'Z') {
                    lastPos--;
                }
                if (lastPos >= 0) {
                    result.erase(result.begin() + lastPos);
                }
            } else if (keys[i] == 'b') {
                // Remove the last lowercase letter if any
                int lastPos = result.size() - 1;
                while (lastPos >= 0 && result[lastPos] >= 'a' && result[lastPos] <= 'z') {
                    lastPos--;
                }
                if (lastPos >= 0) {
                    result.erase(result.begin() + lastPos);
                }
            }
        }

        for (char ch : result) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
