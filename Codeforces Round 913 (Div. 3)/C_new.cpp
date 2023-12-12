#include <iostream>
#include <string>

std::string reduceString(const std::string& input) {
    std::string result = input;

    bool reductionMade = true;
    while (reductionMade) {
        reductionMade = false;
        std::string newResult;

        for (size_t i = 0; i < result.size(); ++i) {
            if (i < result.size() - 1 && std::abs(result[i] - result[i + 1]) == 32) {
                // Check if the current character and the next character are adjacent
                // distinct alphabets (case-insensitive). If so, skip both characters.
                ++i;
                reductionMade = true;
            } else {
                // Otherwise, add the current character to the new result.
                newResult.push_back(result[i]);
            }
        }

        // Update result for the next iteration or exit the loop if no reduction is made.
        result = newResult;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string reducedString = reduceString(input);

    std::cout << "Reduced string: " << reducedString << std::endl;

    return 0;
}
