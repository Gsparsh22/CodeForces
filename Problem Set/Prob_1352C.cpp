#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n,k;
    cin >> n >> k;
    int i=0;
    int j=1;
    while(i<k){
        if(j%n==0){
            j++;
            i++;
        }
        else{
            j++;
        }
    }
    cout << j-1 << endl;
}
    return 0;
}