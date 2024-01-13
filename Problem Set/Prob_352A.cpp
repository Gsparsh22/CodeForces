#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    cin_array(a,n);
    int count = 0;
    int count_5 = 0;
    int count_0 = 0;
    for(int i=0; i<n; i++){
        if(a[i]==5){
            count_5++;
        }
        else{
            count_0++;
        }
    }
    if(count_0==0){
        cout<<-1<<endl;
    }
    else if(count_5<9){
        cout<<0<<endl;
    }
    else{
        count_5 = count_5 - count_5%9;
        for(int i=0; i<count_5; i++){
            cout<<5;
        }
        for(int i=0; i<count_0; i++){
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}