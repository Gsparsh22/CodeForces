#include <bits/stdc++.h>
using namespace std;

int diff(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return a[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    b[n] = 0;
    c[n] = 0;
    c[n - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }
    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);
    cout << diff(a, b, n) << endl;
    cout << diff(b, c, n) << endl;
    return 0;
}