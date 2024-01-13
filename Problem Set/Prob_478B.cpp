#include<bits/stdc++.h>
using namespace std;

long long int nc2(long long int n){
    return (n*(n-1))/2;
}

int main(){
    long long int n, m;
    cin >> n >> m;
    if(m == 1){
        cout << nc2(n) << " " << nc2(n) << endl;
        return 0;
    }
    long long int max = nc2(n-m+1);
    long long int min = nc2(n/m)*(m-n%m) + nc2(n/m+1)*(n%m);
    cout << min << " " << max << endl;
    return 0;
}