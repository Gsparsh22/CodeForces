#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, s;
    cin >> m >> s;
    int smallest = pow(10, m-1);
    int largest = pow(10, m) - 1;
    if(s == 0){
        if(m == 1){
            cout << "0 0" << endl;
        }
        else{
            cout << "-1 -1" << endl;
        }
        return 0;
    }
    if(s > 9*m){
        cout << "-1 -1" << endl;
        return 0;
    }
    int sum = s;
    int a[m];
    for(int i=m-1; i>=0; i--){
        if(sum > 9){
            a[i] = 9;
            sum -= 9;
        }
        else{
            a[i] = sum;
            sum = 0;
        }
    }
    int sum1 = s;
    int b[m];
    for(int i=0; i<m; i++){
        if(sum1 > 9){
            b[i] = 9;
            sum1 -= 9;
        }
        else{
            b[i] = sum1;
            sum1 = 0;
        }
    }
    int i = 0;
    while(a[i] == 0){
        i++;
    }
    a[i] -= 1;
    a[0] += 1;
    for(int i=0; i<m; i++){
        cout << a[i];
    }
    cout << " ";
    for(int i=0; i<m; i++){
        cout << b[i];
    }
    cout << endl;
    return 0;
}