#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long oddSum = 0, evenSum = 0, totalSum = 0;
        long long maxSum = 0;

        for (int i = 0; i < n; ++i)
        {
            totalSum += a[i];
            if (i % 2 == 0)
            {
                evenSum += a[i];
            }
            else
            {
                oddSum += a[i];
            }

            maxSum = max(maxSum, max(oddSum, evenSum));
            if (oddSum < 0)
                oddSum = 0;
            if (evenSum < 0)
                evenSum = 0;
        }

        cout << maxSum << "\n";
    }

    return 0;
}