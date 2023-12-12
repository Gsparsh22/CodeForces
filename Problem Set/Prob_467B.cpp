#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x = a[i] ^ a[m];
        int cnt = 0;
        while (x > 0)
        {
            if (x % 2 == 1)
            {
                cnt++;
            }
            x /= 2;
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}