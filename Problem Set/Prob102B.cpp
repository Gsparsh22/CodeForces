#include<bits/stdc++.h>
using namespace std;

long long int sum(long long int n){
    long long int s = 0;
    while(n){
        s += n%10;
        n /= 10;
    }
    return s;
}

int main(){
    long long int n;
    long long int count = 0;;
    cin >> n;

    while(n >= 10){
        int temp = sum(n);
        n = temp;
        count++;
    }
    cout << count;
    return 0;
}