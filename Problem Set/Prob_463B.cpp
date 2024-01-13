#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n+1];
    h[0] = 0;
    for(int i=1;i<n+1;i++){
        cin >> h[i];
    }
    int energy = 0;
    int money = 0;
    for(int i=0;i<n;i++){
        energy += h[i] - h[i+1];
        if(energy < 0){
            money += abs(energy);
            energy = 0;
        }
    }
    cout << money << endl;    
    return 0;
}