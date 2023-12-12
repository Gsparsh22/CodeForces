#include <bits/stdc++.h>
using namespace std;

int main(){
    string v;
    cin >> v;
    int n = v.length();
    int flag = 0;
    for(int i = 1; i < n; i++){
        if(v[i] >= 'a' && v[i] <= 'z'){
            cout << v << endl;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        if(v[i] >= 'A' && v[i] <= 'Z'){
            flag++;
        }
    }
    if(flag == n){
        for(int i = 0; i < n; i++){
            v[i] = v[i] + 32;
        }
        cout << v << endl;
        return 0;
    }
    else{
        flag = 0;
    }
    if(flag == 0){
        if (v[0] >= 'a' && v[0] <= 'z'){
            for (int i = 1; i < n; i++){
                if (v[i] >= 'A' && v[i] <= 'Z'){
                    v[i] = v[i] + 32;
                }
            }
            v[0] = v[0] - 32;
        }
    }
    cout << v << endl;
    return 0;
}