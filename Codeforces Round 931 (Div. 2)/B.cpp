#include<bits/stdc++.h>
using namespace std;

void cin_array(vector<int>& a, int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    vector<int> a(t);
    cin_array(a, t);
    int c[31] = {0,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1,2,3,2,3,2,2,3,3,3,2,3,3,3,4,2};
    for(int i = 0; i < t; i++){
        if(a[i] <=30){
            cout << c[a[i]] << endl;
        }
        else{
            cout << (a[i]/15)-1+c[a[i]%15+15] << endl;
        }
    }
    return 0;
}
