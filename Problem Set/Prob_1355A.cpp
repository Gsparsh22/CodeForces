#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, k;
        cin >> a1 >> k;
        int a = a1;
        int count = 0;
        while (a > 0)
        {
            a /= 10;
            count++;
        }
        int ans = 0;
        for (int i = 0; i < k - 1; i++)
        {
            int min = 10;
            int max = 0;
            int a = a1;
            for (int j = 0; j < count; j++)
            {
                int rem = a % 10;
                if (rem < min)
                {
                    min = rem;
                }
                if (rem > max)
                {
                    max = rem;
                }
                a /= 10;
            }
            a1 += min * max;
            if (min == 0)
            {
                break;
            }
        }
        cout << a1 << endl;
    }
    return 0;
}