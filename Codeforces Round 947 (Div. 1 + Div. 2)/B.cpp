#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int isdivisible(int a, int b){
    if(a%b == 0){
        return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        sort(a, a+n);
        int b = a[0];
        int c = a[1];
        for(int i=1; i<n; i++){
            if(a[i] > b){
                c = a[i];
                break;
            }
        }
        int flag = 0;
        for(int i=0; i<n; i++){
            if(!(isdivisible(a[i], b) == 0 || isdivisible(a[i], c) == 0)){
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}