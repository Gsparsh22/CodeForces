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
    int even = 0, odd = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        for(int i=0; i<n; i++){
            if(a[i]%2!=0){
                cout << i+1 << endl;
                break;
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(a[i]%2==0){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}