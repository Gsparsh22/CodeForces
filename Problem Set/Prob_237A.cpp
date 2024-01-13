#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n], m[n];
    for(int i=0;i<n;i++){
        cin >> h[i] >> m[i];
    }
    int count = 1;
    int max = 1;
    for(int i=0;i<n-1;i++){
        if(h[i] == h[i+1] && m[i] == m[i+1]){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 1;
        }
    }
    cout << max << endl;
    return 0;
}