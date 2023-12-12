#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    int flag = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "Happy Alex" << endl;
    }
    else{
        cout << "Poor Alex" << endl;
    }
    return 0;
}