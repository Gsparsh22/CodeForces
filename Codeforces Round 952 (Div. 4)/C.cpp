#include <bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n) {
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        long long int sum = 0;
        long long int count = 0;

        map<long long int, long long int> M;

        for(int i=0; i<n; i++){
            sum = sum + a[i];
            M[a[i]]++;
            if(sum%2 == 0 && M[sum/2]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
