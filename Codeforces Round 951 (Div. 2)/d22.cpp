#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

bool checkAlternating(string s, int k) {
    int n = s.length();
    
    if (n % k != 0)
        return false;
    
    for (int i = 0; i < n; i += k) {
        char current = s[i];
        
        for (int j = i; j < i + k; j++) {
            if (s[j] != current)
                return false;
            current = (current == '0') ? '1' : '0';
        }
    }
    
    return true;
}

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(checkAlternating(s, k)){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}