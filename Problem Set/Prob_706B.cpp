#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int q;
    cin >> q;
    int m;
    for(int i = 0; i < q; i++){
        cin >> m;
        int count = 0;
        for(int j = 0; j < n; j++){
            if(x[j] <= m){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}