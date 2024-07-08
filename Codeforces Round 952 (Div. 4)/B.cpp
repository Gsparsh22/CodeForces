#include<bits/stdc++.h>
using namespace std;

int max_index(int a[], int n){
    int max = a[2];
    int index = 2;
    for(int i=2; i<=n; i++){
        if(a[i] >= max){
            max = a[i];
            index = i;
        }
    }
    return index;
}

void cout_array(int a[], int n){
    for(int i=2; i<=n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[n+1];
        for(int i=2; i<=n; i++){
            b[i] = (((n)*(1+(n/i)))/2);
        }
        cout_array(b, n);
        cout << max_index(b, n) << endl;
    }
    return 0;
}