#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int max_array(int a[], int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int x[n];
    cin_array(x, n);
    
    int sum1 = 0;
    int sum2 = 0;
    int T_sum = max_array(x, n)*n+sum2;
    int j = 0;
    for(int i=0; i<n; i++){
        sum2 -= x[i];
        sum1 += x[i];
        int temp = sum1 + sum2 + (n-1)*x[i];
        if(temp <= T_sum){
            T_sum = temp;
            j = i;
        }
    }
    cout << j+1 << endl;
    return 0;
}