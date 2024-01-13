#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x = sqrt((a*b)/c);
    int y = sqrt((a*c)/b);
    int z = sqrt((b*c)/a);
    cout << 4*(x+y+z) << endl;
    return 0;
}