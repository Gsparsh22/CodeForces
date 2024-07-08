#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findMaxMultiplier(const vector<int>& multipliers) {
    int maxMultiplier = 0;
    int index = -1;
    for (int i = 0; i < multipliers.size(); ++i) {
        if (multipliers[i] > maxMultiplier) {
            maxMultiplier = multipliers[i];
            index = i;
        }
    }
    return {index, maxMultiplier};
}

void distributeCoins(int totalCoins, const vector<int>& multipliers) {
    // Find the outcome with the highest multiplier
    pair<int, int> maxMultiplierOutcome = findMaxMultiplier(multipliers);
    int maxIndex = maxMultiplierOutcome.first;
    int maxMultiplier = maxMultiplierOutcome.second;

    // Bet all coins on the outcome with the highest multiplier
    cout << "Bet " << totalCoins << " coins on outcome " << maxIndex << endl;

    // Bet 0 coins on all other outcomes
    for (int i = 0; i < multipliers.size(); ++i) {
        if (i != maxIndex) {
            cout << "Bet 0 coins on outcome " << i << endl;
        }
    }

    // Output the expected return
    cout << "Expected return if outcome " << maxIndex << " wins: " << totalCoins * maxMultiplier << " coins" << endl;
}

int main() {
    int n;
    cout << "Enter the number of possible outcomes: ";
    cin >> n;

    vector<int> multipliers(n);
    cout << "Enter the multipliers for each outcome: ";
    for (int i = 0; i < n; ++i) {
        cin >> multipliers[i];
    }

    int totalCoins;
    cout << "Enter the total number of coins: ";
    cin >> totalCoins;

    distributeCoins(totalCoins, multipliers);

    return 0;
}
