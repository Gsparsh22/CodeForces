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

string flipAndRotate(string s, int p) {
    int n = s.length();
    reverse(s.begin(), s.begin() + p);
    string temp = s.substr(0, p);
    s.erase(0, p);
    s.append(temp);    
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int g = n/k;
        bool found = false;
        for(int i = 0; i < n; i++){
            string rotated = flipAndRotate(s, i);
            cout << rotated << endl;
            if(checkAlternating(rotated, k)){
                cout << i << endl;
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << endl;
    }
    return 0;
}
