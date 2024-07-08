#include <iostream>
#include <algorithm>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        cin_array(a, n);
        sort(a, a+n);
        int j = n - k - x;
        int sum = 0;
        for(int i=0; i <= j+k; i++){
            if(i <= j){
                sum += a[i];
            } else {
                sum -= a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}