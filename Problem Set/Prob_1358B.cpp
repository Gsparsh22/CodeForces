#include <bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        sort(a,a+n);

        int flag = 0;

        for(int i=n-1; i>=0; i--){
            if(a[i] <= i+1){
                cout<<i+2<<endl;
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag == 0){
            cout<<1<<endl;
        }
    }
    return 0;
}