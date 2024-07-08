#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
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
        long long int b[n+1];
        cin_array(b, n+1);
        long long int c = b[n];
        bool flag = false;
        long long int sum = 0;

        for(long long int i = 0; i < n; i++){
            if((c >= a[i] && c <= b[i]) || (c >= b[i] && c <= a[i])){
                flag = true;
            }
        }
        
        for(long long int i = 0; i < n; i++){
            sum += abs(a[i] - b[i]);
        }
                
        long long int a_b[2*n];
        for(long long int i = 0; i < n; i++){
            a_b[i] = a[i];
            a_b[i+n] = b[i];
        }
        
        if(flag){
            sum++;
        }
        else{
            sort(a_b, a_b + 2*n);
            long long int max = a_b[2*n-1];
            long long int min = a_b[0];
            if(c >= max){
                sum += abs(c - max) + 1;
            }
            else if(c <= min){
                sum += abs(min - c) + 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}