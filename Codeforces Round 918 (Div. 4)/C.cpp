#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int sqrt_check(int n){
    long long int k = sqrt(n);
    long long int odd = 1;
    long long int sum = 0;
    for(long long int i=0; i<=2*k; i++){
        if(i%2 == 1){
            sum += i;
        }
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        long long int sum = 0;
        for(long long int i=0; i<n; i++){
            sum += a[i];
        }
        if(sqrt_check(sum) == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}