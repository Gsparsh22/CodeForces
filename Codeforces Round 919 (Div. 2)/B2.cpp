#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void cout_array(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        cin_array(a, n);
        int temp[n];
        sort(a, a+n);
        for(int i=0; i<n; i++){
            temp[i] = a[i];
        }

        int sum[k+1]={0};
        for(int i=0; i<=k; i++){
            for(int j=0; j<n; j++){
                temp[j] = a[j];
            }

            for(int j=0; j<i; j++){
                temp[n-1-j] = 0;
            }
            sort(temp, temp+n);
            //cout_array(temp, n);

            for(int j=0; j<x; j++){
                temp[n-1-j] = -temp[n-1-j];
            }
            //cout_array(temp, n);

            int temp_sum = 0;
            for(int j=0; j<n; j++){
                temp_sum += temp[j];
            }
            sum[i] = temp_sum;

        }
        sort(sum, sum+k+1);
        //cout_array(sum, k+1);
        cout<<sum[k]<<endl;
        
    }
    return 0;
}