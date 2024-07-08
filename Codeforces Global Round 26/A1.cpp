#include <iostream>
#include <vector>
#include <string>

using namespace std;

void colorArray(const vector<long long int>& arr) {
    long long int n = arr.size();
    if (n < 3) {
        cout << "NO" << endl;
        return;
    }

    vector<string> colors(n);
    
    // Coloring the first element red and the last element blue
    colors[0] = "R";
    colors[n-1] = "B";

    // If there are only three elements, directly color them
    if (n == 3) {
        colors[1] = "B"; // Ensure there are at least one red and one blue
    } else {
        // Coloring remaining elements
        bool differentRangeFound = false;
        for (long long int i = 1; i < n - 1; ++i) {
            if (arr[i] != arr[0]) {
                colors[i] = "R";
                differentRangeFound = true;
            } else {
                colors[i] = "B";
            }
        }

        // If all middle elements were colored Blue, just make sure we color at least one of them Red
        if (!differentRangeFound) {
            colors[1] = "R";
        }
    }

    // Output the result
    for (long long int i = 0; i < n; ++i) {
        cout << colors[i];
    }
    cout << endl;
}

long long int main() {
    long long int t; 
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        for (long long int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    colorArray(arr);
    }

    return 0;
}
