#include<bits/stdc++.h>
using namespace std;

void cin_array(char a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char c[k];
    cin_array(c, k);
    int allowed[26] = {0};
    for(int i=0; i<k; i++){
        allowed[c[i]-'a'] = 1;
    }
    int j=0;
    long long int ans = 0;
    for(int i=0; i<n; i++){
        if(allowed[s[i]-'a'] == 0){
            long long int len = i - j;
            ans += (len*(len+1))/2;
            j = i + 1;
        }
    }
    long long int len = n - j;
    ans += (len*(len+1))/2;
    cout << ans << endl;
    return 0;
}