#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    vector<int> in;
    int min_back;
    int min_front;
    
    string in;
    while(t--){
        cin >> n;
        cin >> in;
        for (int i=in.size(); i>0; --i){
            if(in[i]!=in[i++]){
                in.pop_back;
                in.pop_back;
            }
            
        }

    }

    return 0;
}