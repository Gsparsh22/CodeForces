#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

void cout_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// remove all the zeros from the array
void remove_zeros(long long int a[], long long int n){
    long long int j = 0;
    for(long long int i=0; i<n; i++){
        if(a[i] != 0){
            a[j] = a[i];
            j++;
        }
    }
    for(long long int i=j; i<n; i++){
        a[i] = 0;
    }
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        cin_array(a, n);
        long long int c = 0;
        //remove_zeros(a, n);
        //cout_array(a, n);
        if(n == 1){
            cout << abs(a[0]) << endl;
            continue;
        }
        int count_neg = 0;
        for (int i = 0; i < n; i++) {
            if(a[i] < 1){
                count_neg++;
            }
        }
        if(count_neg == n){
            for (int i = 0; i < n; ++i) {
                c = c + abs(a[i]);
            }
        }
        else{
            for (int i = 0; i < n; ++i){
                if((c+a[i]) < 0){
                    c = abs(c + a[i]);
                }
                else{
                    c += a[i];
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}