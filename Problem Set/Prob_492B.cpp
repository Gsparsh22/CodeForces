#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long l;    
    cin >> n;
    cin >> l;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    double maxDist = 0;
    for(int i = 0; i < n - 1; i++){
        maxDist = max(maxDist, (a[i + 1] - a[i]) / 2.0);
    }
    maxDist = max(maxDist, (double)a[0]);
    maxDist = max(maxDist, (double)l - a[n - 1]);
    cout << fixed << setprecision(10) << maxDist << endl;
    return 0;
}