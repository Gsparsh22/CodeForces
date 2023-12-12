#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int i = 0;
    while(n > 5*pow(2, i)){
        n -= 5*pow(2, i);
        i++;
    }
    cout << names[(int)((n-1)/pow(2, i))] << endl;
    return 0;
}