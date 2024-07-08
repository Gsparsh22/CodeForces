#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveLength(long long int k) {
    int maxLength = 0;
    int currentLength = 0;
    
    // We iterate over the bits of k to find consecutive '1's or '0's
    while (k > 0) {
        if (k & 1) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
        k >>= 1;
    }

    return maxLength + 1; // add one to handle the transition from one number to another
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long int x, y;
        cin >> x >> y;
        int k = x ^ y;
        cout << maxConsecutiveLength(k) << endl;        
    }
    return 0;
}
