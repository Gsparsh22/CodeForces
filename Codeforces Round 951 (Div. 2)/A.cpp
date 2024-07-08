#include <bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int max_two(int a, int b){
    return a > b ? a : b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);

        if (n < 2) {
            continue;
        }

        int max_val = max_two(a[0], a[1]) - 1;
        for(int i = 0; i < n - 1; i++){
            int temp = max_two(a[i], a[i + 1]);
            if(temp - 1 < max_val){
                max_val = temp - 1;
            }
        }
        cout << max_val << endl;
    }
    return 0;
}
