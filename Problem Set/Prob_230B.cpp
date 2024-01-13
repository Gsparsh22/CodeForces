#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

long long int num_of_divisors(long long int n){
    long long int count = 0;
    for(long long int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i){
                count++;
            }
            else{
                count += 2;
            }
        }
    }
    return count;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int x = num_of_divisors(n);
        if(x == 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}