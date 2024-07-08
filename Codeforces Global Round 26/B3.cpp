#include <iostream>
#include <string>

bool isValidSum(int x) {
    std::string s = std::to_string(x);
    int n = s.length();

    // Process each digit from the least significant to the most significant
    for (int i = n - 1; i >= 0; --i) {
        int digit = s[i] - '0';

        // Check all possible pairs of large digits
        bool valid = false;
        for (int d1 = 5; d1 <= 9; ++d1) {
            for (int d2 = 5; d2 <= 9; ++d2) {
                int sum = d1 + d2;
                if (sum % 10 == digit) {
                    valid = true;
                    break;
                }
            }
            if (valid) break;
        }

        // If no valid pair found, the digit cannot be formed
        if (!valid) return false;
    }

    return true;
}

int main() {
    int x;
    std::cout << "Enter an integer x: ";
    std::cin >> x;

    if (isValidSum(x)) {
        std::cout << "Yes, " << x << " can be the sum of two large positive integers with the same number of digits." << std::endl;
    } else {
        std::cout << "No, " << x << " cannot be the sum of two large positive integers with the same number of digits." << std::endl;
    }

    return 0;
}
