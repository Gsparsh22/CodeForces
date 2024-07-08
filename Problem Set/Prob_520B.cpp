#include<bits/stdc++.h>
using namespace std;

int red(int n){
    return 2*n;
}

int blue(int n){
    return n-1;
}

int main(){
    int n, m;
    cin >> n >> m;
    int steps = 0;
    while(n != m){
        if(n < m){
            if(m%2 == 0){
                m = m/2;
                steps++;
            }
            else{
                m = m+1;
                steps++;
            }
        }
        else{
            m = m+1;
            steps++;
        }
    }
    
    cout << steps << endl;
    return 0;
}