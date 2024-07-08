#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

string flip(string s, int i){
    int n = s.length();
    //copy the string i to n into temp
    string temp = s.substr(i, n-i);
    //reverse the string temp
    reverse(temp.begin(), temp.end());
    //return the string s from 0 to i and then append the flipped string temp
    return s.substr(0, i) + temp;
}

bool isKProper(int s[], int n, int k) {
    int sum[n] = {0};
    sum[0] = s[0];
    for(int i=0; i<n; i++){
        sum[i] = sum[i-1] + s[i];
    }
}
    

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a[n];

        for(int i=0; i<n; i++){
            a[i] = s[i] - '0';
        }

        for(int i=0; i<n; i++){

            cout << "this is flipped: " << flipped << endl;
            if(isKProper(flipped, k)){
                cout << i << endl;
                continue;
            }
        }      
        cout << -1 << endl;  
    }
    return 0;
}