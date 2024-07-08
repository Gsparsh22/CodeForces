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
        int neg = 0;
        int pos = 0;
        for(int i=0; i<n; i++){
            if(a[i] < 0){
                neg++;
            }
            else{
                pos++;
            }
        }
        cout << (2^pos)*(2^neg-1) << endl;
    }
    return 0;
}