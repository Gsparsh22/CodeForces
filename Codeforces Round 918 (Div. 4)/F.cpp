#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int max_diff(int a[], int b[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(abs(a[i]-b[i]) > max){
            max = abs(a[i]-b[i]);
        }
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
        }
        int max = max_diff(a, b, n);
        int hand = 0;
        for(int l=0; l<max ;l++){
            for(int i=0; i<n; i++){
                if(a[i] == b[i]){
                    break;
                }
                else if(a[i] < b[i]){
                    a[i]++;
                }
                else{
                    a[i]--;
                }
            }
            for(int b=0; b<n; b++){
                for(int k=0; k<n; k++){
                    if(a[b] == a[k]){
                        hand++;
                        break;
                    }
                }
            }
        }
        cout << hand << endl;
    }
    return 0;
}