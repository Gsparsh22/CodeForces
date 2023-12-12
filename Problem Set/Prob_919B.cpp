#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    int i=19;
    while(k){
        int sum=0;
        int temp=i;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }
        if(sum==10) k--;
        i++;
    }
    cout << i-1 << endl;
    return 0;
}