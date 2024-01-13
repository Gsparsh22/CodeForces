#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int is_sorted(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    cin_array(a, n);
    int i = 0;
    int j = 0;
    
        while(j+1 < n && a[j] < a[j+1]){
            j++;
            i++;
        }
        while(j+1 < n && a[j] > a[j+1]){
            j++;
        }
        reverse(a+i, a+j+1);
        int temp_i = i;
        int temp_j = j;
        i=j;
        while(j+1 < n && a[j] < a[j+1]){
            j++;
            i++;
        }
        
        if(is_sorted(a, n)){
            cout << "yes" << endl;
            cout << temp_i+1 << " " << temp_j+1 << endl;
            return 0;
        }
        else{
            cout << "no" << endl;
            return 0;
        }
        
    return 0;
}