#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int func(){
    ll a, sum = 0;
    cin >> a;
    while (a != 0)
    {
        if (a % 2 == 1)
            sum++;
        a = a / 2;
    }
    cout << sum << endl;
    return 0;
}
int main()
{
    long long testCase=1;
    while(testCase--){
        func();
    }
    return 0;
}
