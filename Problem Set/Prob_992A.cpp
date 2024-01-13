#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    cin_array(a, n);
    sort(a, a+n);
    int nonzero = 0;
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            a[i] = 0;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            nonzero++;
        }
    }
    cout << n-nonzero << endl;
    return 0;
}