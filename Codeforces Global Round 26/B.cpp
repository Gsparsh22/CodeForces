#include<bits/stdc++.h>
using namespace std;

void cin_array(long long int a[], long long int n){
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
}

long long int count_digits(long long int n){
    long long int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
}


long long int generate_ones(long long int n){
    long long int num = 0;
    for(long long int i=0; i<n; i++){
        num = num*10 + 1;
    }
    return num;
}

int main(){
    long long int t;
    cin >> t;
    long long int a[t];
    cin_array(a, t);
    long long int count_temp;
    long long int a_temp, b_temp;
    for(long long int i=0; i<t; i++){
        count_temp = count_digits(a[i]) - 1;
        a_temp = 10*generate_ones(count_temp);
        b_temp = 18*generate_ones(count_temp);
        if(a[i] >= a_temp && a[i] <= b_temp){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}