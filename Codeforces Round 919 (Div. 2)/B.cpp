#include <bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        int temp[n];
        cin_array(a, n);
        sort(a, a + n);
        int sum = 0;

        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        sum = -sum;

        for (int i = 0; i < n; i++){
            temp[i] = a[i];
        }

        for (int i = 0; i <= k; i++){
            for (int i = 0; i < n; i++){
                a[i] = temp[i];
            }
            for (int j = n - 1; j > n - i - 1; j--){
                a[j] = 0;
            }

            sort(a, a + n);

            for (int b = n - 1; b > n - 1 - x; b--){
                a[b] = -a[b];
            }

            int temp_sum = 0;
            for (int c = 0; c < n; c++){
                temp_sum += a[c];
            }

            if (temp_sum > sum){
                sum = temp_sum;
            }
        }
        cout << sum << endl;
    }
    return 0;
}