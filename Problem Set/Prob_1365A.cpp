#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int row[n] = {0};
        int col[m] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i] == 0 && col[j] == 0){
                    count++;
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        if(count%2 == 0){
            cout << "Vivek" << endl;
        }
        else{
            cout << "Ashish" << endl;
        }
    }
    return 0;
}