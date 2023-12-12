#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == ')' || s[s.length()-1] == '(' || s.length()%2 != 0){
            cout << "NO" << endl;
            continue;
        }
        int len = s.length();
        int flag = 0;
        for(int i=0; i<len; i++){
            if(s[i] == '('){
                flag++;
            }
            else if(s[i]==')'){
                flag--;
            }
            else if(s[i] == '?' && flag>0){
                s[i] = ')';
                flag--;
            }
            else if(s[i] == '?' && flag==0){
                s[i] = '(';
                flag++;
            }
            else if(s[i] == '?' && flag<0){
                s[i] = '(';
                flag++;
            }
        }
        if(flag == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}