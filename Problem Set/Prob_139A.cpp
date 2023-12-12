#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[7];
    for(int i=0; i<7; i++){
        cin >> a[i];
    }
    int i = 0;
    while(n > 0){
        n -= a[i];
        i++;
        if(i == 7){
            i = 0;
        }
    }
    if(i == 0){
        i = 7;
    }
    cout << i << endl;
    return 0;
}