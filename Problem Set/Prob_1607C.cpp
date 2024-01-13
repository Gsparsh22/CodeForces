#include<bits/stdc++.h>
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
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        int min_values[n];
        
        int original_n = n;

        while(n > 0){
            sort(a, a+n);
            int temp = a[0];
            for(int i=0; i<n; i++){
                a[i] -= temp;
            }
            sort(a, a+n, greater<int>());
            min_values[n-1] = temp;
            n--;
        }

        sort(min_values, min_values+original_n);
        cout << min_values[original_n-1] << endl;
    }
    return 0;
}
