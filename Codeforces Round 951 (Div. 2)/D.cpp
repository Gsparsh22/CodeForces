#include <iostream>
#include <string>

bool isKProper(const std::string& s, int k) {
    int n = s.length();

    for (int i = 0; i <= n - k; ++i) {
        bool same = true;
        for (int j = 1; j < k; ++j) {
            if (s[i + j] != s[i]) {
                same = false;
                break;
            }
        }

        if (same && (i + k >= n || s[i + k] != s[i]))
            return true;
    }

    return false;
}

int main() {
    std::string s;
    int k;

    std::cout << "Enter the string: ";
    std::cin >> s;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    if (isKProper(s, k))
        std::cout << "The string is k-proper." << std::endl;
    else
        std::cout << "The string is not k-proper." << std::endl;

    return 0;
}
