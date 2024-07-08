#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    int a[n], b[m];
    int should_be = 0;
    for(int i=0; i<n; i++){
        if(s1[i] == '+'){
            a[i] = 1;
            should_be++;
        }
        else{
            a[i] = -1;
            should_be--;
        }
    }
    int zero = 0;
    for(int i=0; i<m; i++){
        if(s2[i] == '+'){
            b[i] = 1;
        }
        else if(s2[i] == '-'){
            b[i] = -1;
        }
        else{
            b[i] = 0;
            zero++;
        }
    }
    int sum_b = 0;
    for(int i=0; i<m; i++){
        sum_b += b[i];
    }
    int diff = should_be - sum_b;
    if(diff < 0){
        diff = -diff;
    }
    if(diff > zero){
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }
    int total = 1 << zero;
    int count = 0;
    for(int i=0; i<total; i++){
        int sum = 0;
        for(int j=0; j<zero; j++){
            if(i & (1 << j)){
                sum += 1;
            }
            else{
                sum -= 1;
            }
        }
        if(sum == diff){
            count++;
        }
    }
    double ans = (double)count / (double)total;
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}