#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

void sortAndRemoveDuplicates(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());

    std::unordered_set<int> seen;
    std::vector<int> uniqueArr;
    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            uniqueArr.push_back(num);
            seen.insert(num);
        }
    }
    arr = uniqueArr;
}

bool checkDivisibility(const std::vector<int>& arr) {
    if (arr.size() < 2) {
        return false;
    }

    int c = arr[1];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i]%arr[0] != 0) {
            c = arr[i];
            break;
        }
    }

    int first = arr[0];
    int second = c;

    for (int num : arr) {
        if (num % first != 0 && num % second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    std::cin >> t;
    while(t--){
    std::vector<int> arr;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }

    sortAndRemoveDuplicates(arr);

    bool divisible = checkDivisibility(arr);

    if (divisible) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    }
    return 0;
}
