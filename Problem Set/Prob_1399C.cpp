#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int w[n];
        cin_array(w, n);
        int teams = 0;
        sort(w, w+n);
        
        int sum_count[2 * w[n-1] + 1] = {0}; 
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum_count[w[i] + w[j]]++;
            }
        }


        int max_count = *max_element(sum_count, sum_count + 2 * w[n-1] + 1);

        cout << max_count << endl;
    }
    return 0;
}
