#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    long long int n, t;
    cin >> n >> t;
    long long int a[n];
    cin_array(a, n);
    long long int max1 = 0;
    long long int sum = 0;
    long long int i = 0;
    long long int j = 0;
    long long int max_len = 0;
    while(j < n){
        if(sum + a[j] <= t){
            sum += a[j];
            j++;
        }
        else{
            sum -= a[i];
            i++;
        }
        if(sum >= max1){
            max1 = sum;
            max_len = max(max_len, j-i);
        }
        cout << i << " " << j << " " << sum << " " << max1 << " " << max_len << endl;
    }
    cout << max_len << endl;
    return 0;
}