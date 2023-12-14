#include<bits/stdc++.h>
using namespace std;

int main(){
    int c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    int b;
    b = c1+c2+c3+c4+c5;
    if(b%5==0 && b!=0){
        cout<<b/5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}