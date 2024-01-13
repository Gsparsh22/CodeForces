#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
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
        int sign = 0;
        int zero = 0;
        for(int i=0; i<n; i++){
            if(a[i] < 0){
                sign++;
            }
            else if(a[i] == 0){
                zero++;
            }
        }
        sign = sign % 2;
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(a[i] < 0){
                sum += abs(a[i]);
            }
            else if(a[i] > 0){
                sum += a[i];
            }
        }
        for(int i=0; i<n; i++){
            a[i] = abs(a[i]);
        }
        sort(a, a+n);
        if(zero > 0){
            cout << sum << endl;
        }
        else{
            if(sign == 1){
                sum -= 2*a[0];
                cout << sum << endl;
            }
            else{
                cout << sum << endl;
            }
        }
    }
    return 0;
}