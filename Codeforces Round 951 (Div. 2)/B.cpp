#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int XOR(long long int a, long long int b){
    return a ^ b;
}

int maxConsecutiveLength(const vector<int>& nums) {
    int maxLength = 0;
    int currentLength = 1;

    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1;
        }
    }

    currentLength = 1;
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1] - 1) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1;
        }
    }

    return maxLength;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int x, y;
        cin >> x >> y;
        int k = XOR(x, y);
        vector<int> n(k);
        for(int i = 0; i < k; i++){
            n[i] = i ^ k;
        }
        cout << maxConsecutiveLength(n) << endl;        
    }
    return 0;
}