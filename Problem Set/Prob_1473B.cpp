#include <bits/stdc++.h>
#define ll long long
using namespace std;

string build(string s, int k)
{
    string r = "";
    while (k--)
    {
        r += s;
    }

    return r;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        ll g = __gcd(s.length(), t.length());
        if (build(s, t.length() / g) == build(t, s.length() / g))
            cout << build(s, t.length() / g) << endl;
        else
            cout << -1 << endl;
    }
}