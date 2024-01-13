#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    long long int n;
    cin >> n;
    long long int b[n];
    cin_array(b, n);
    sort(b, b+n);
    long long int min = b[0];
    long long int max = b[n-1];
    long long int count_min = 0;
    long long int count_max = 0;
    for(long long int i=0; i<n; i++){
        if(b[i] == min){
            count_min++;
        }
        if(b[i] == max){
            count_max++;
        }
    }
    if(min == max){
        cout << 0 << " " << n*(n-1)/2 << endl;
    }
    else{
        cout << max-min << " " << count_min*count_max << endl;
    }
    return 0;
}