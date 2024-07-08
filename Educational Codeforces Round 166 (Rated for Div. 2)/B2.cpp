#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

int isBetween(int x, int a, int b) {
    return (x >= a && x <= b) || (x >= b && x <= a);
}

int max_element(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int min_element(int a[], int n){
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        cin_array(a, n);
        int b[n+1];
        cin_array(b, n+1);
        int c = b[n];
        bool flag = false;
        int sum = 0;
        for(int i = 0; i < n; i++){
            flag = isBetween(c, a[i], b[i]);
            if(flag){
                break;
            }
        }
        if(flag){
            for(int i = 0; i < n; i++){
                sum = sum + abs(a[i] - b[i]);
            }
            sum++;
            cout << sum << endl;
            continue;
        }
        else{
            for(int i = 0; i < n; i++){
                sum = sum + abs(a[i] - b[i]);
            }
            int max = max_element(a, n);
            int min = min_element(a, n);
            if(c >= max){
                sum = sum + abs(c - max) + 1;
            }
            else if(c <= min){
                sum = sum + abs(min - c) + 1;
            }
            cout << sum << endl;
        }
    }
    return 0;
}