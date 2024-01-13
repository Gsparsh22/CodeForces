#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        long long int len = s.length();
        if(s[0] == 'R' && (s[1] >= '0' && s[1] <= '9')){
            long long int i = 1;
            while(s[i] >= '0' && s[i] <= '9'){
                i++;
            }
            if(s[i] == 'C'){
                long long int j = i+1;
                while(s[j] >= '0' && s[j] <= '9'){
                    j++;
                }
                long long int r = stoi(s.substr(1, i-1));
                long long int c = stoi(s.substr(i+1, j-i-1));
                string ans = "";
                while(c){
                    long long int rem = c%26;
                    if(rem == 0){
                        ans += 'Z';
                        c = c/26 - 1;
                    }
                    else{
                        ans += (rem - 1) + 'A';
                        c = c/26;
                    }
                }
                reverse(ans.begin(), ans.end());
                cout << ans << r << endl;
            }
            else{
                long long int j = i+1;
                while(s[j] >= 'A' && s[j] <= 'Z'){
                    j++;
                }
                string c = s.substr(i, j-i);
                long long int col = 0;
                for(long long int k=0; k<c.length(); k++){
                    col = col*26 + (c[k] - 'A' + 1);
                }
                cout << "R" << s.substr(j, len-j) << "C" << col << endl;
            }
        }
        else{
            long long int i = 0;
            while(s[i] >= 'A' && s[i] <= 'Z'){
                i++;
            }
            string c = s.substr(0, i);
            long long int col = 0;
            for(long long int k=0; k<c.length(); k++){
                col = col*26 + (c[k] - 'A' + 1);
            }
            cout << "R" << s.substr(i, len-i) << "C" << col << endl;
        }
    }
    return 0;
}