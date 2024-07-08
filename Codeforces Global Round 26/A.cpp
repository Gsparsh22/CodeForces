#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
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
        string s(n, 'R');
        if(a[0] == a[n-1]){
            cout << "NO" << endl;
            continue;
        }
        else{
            for(long long int i=n-1; i>=0; i--){
                long long int x = a[n-1];
                if(!(a[i] == x)){
                    if(i == 0){
                        s[i] = 'B';
                        s[i+1] = 'B';
                        break;
                    }
                    s[i] = 'B';
                    break;
                }
            }
        }
        cout << "YES" << endl;
        cout << s << endl;
    }
    return 0;
}