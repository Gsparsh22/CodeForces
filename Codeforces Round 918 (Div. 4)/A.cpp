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
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b){
            cout << c << endl;
        }
        else if(a == c){
            cout << b << endl;
        }
        else if(b == c){
            cout << a << endl;
        }
    }
    return 0;
}