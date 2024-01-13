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
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    sort(a, a+n, greater<int>());
    int ans = 0;
    int j = 0;
    for(int i=0; i<n-1; i++){
        while(abs(a[j] - a[i]) <= 5){
            j++;
            if(j == n){
                break;
            }
        }
        int temp = j-i;
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}