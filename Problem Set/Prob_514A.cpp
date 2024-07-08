#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    int digits = 0;
    long long int temp = n;
    while(temp){
        temp /= 10;
        digits++;
    }
    int ans[digits] = {0};
    temp = n;
    for(int i = digits-1; i >= 0; i--){
        ans[i] = temp%10;
        temp /= 10;
    }
    if(ans[0] > 4 && ans[0] != 9){
        ans[0] = 9 - ans[0];
    }
    for(int i = 1; i < digits; i++){
        if(ans[i] > 4){
            ans[i] = 9 - ans[i];
        }
    }
    for(int i = 0; i < digits; i++){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}