#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == '.'){
                    if(j+1 < m && a[i][j+1] == '.'){
                        ans += min(2*x, y);
                        j++;
                    }
                    else{
                        ans += x;
                    }
                }
                
            }
        }
        cout << ans << endl;
    }
    return 0;
}