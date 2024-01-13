#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s;
    map<string, int> s1;
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        s1[temp]++;
        if(s1[temp]==1){
            cout << "OK" << endl;
        }
        else{
            cout << temp << s1[temp]-1 << endl;
        }
    }
}