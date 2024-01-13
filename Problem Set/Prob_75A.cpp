#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    int c = a+b;
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    string s4 = "";
    for(int i=0; i<s1.length(); i++){
        if(s1[i]!='0'){
            s4 += s1[i];
        }
    }
    int a1 = stoi(s4);
    s4 = "";
    for(int i=0; i<s2.length(); i++){
        if(s2[i]!='0'){
            s4 += s2[i];
        }
    }
    int b1 = stoi(s4);
    s4 = "";
    for(int i=0; i<s3.length(); i++){
        if(s3[i]!='0'){
            s4 += s3[i];
        }
    }
    int c1 = stoi(s4);
    if(a1+b1==c1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}