#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a[9];
        for(int i=0;i<9;i++){
            cin >> a[i];
        }

        for(int i=0;i<9;i++){
            string num_str = to_string(a[i]);
            for(char &c : num_str){
                if(c == '1'){
                    c = '9';
                    break;
                }
            }
            a[i] = stoll(num_str);
        }

        for(int i=0;i<9;i++){
            cout << (int)a[i] << endl;
        }
    }
    return 0;
}
