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
        int n, f, k;
        cin >> n >> f >> k;
        int a[n];
        cin_array(a, n);
        int f_1 = a[f-1];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] < a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int c = a[k];
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i] == c){
                count++;
            }
        }
        if(c > f_1){
            cout << "NO" << endl;
        }
        else if(c == f_1){
            if(count > 1){
                cout << "MAYBE" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}