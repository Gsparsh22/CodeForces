#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main(){
    int n, w;
    cin >> n >> w;
    int a[n];
    cin_array(a, n);
    
    vector<pair<int, int>> containers;
    for(int i=0; i<n; i++){
        containers.push_back({i, a[i]});
    }

    sort(containers.begin(), containers.end(), [](auto &left, auto &right) {
        return left.second > right.second;
    });

    int fill[n];
    int empty[n];
    for(int i=0; i<n; i++){
        fill[i] = (a[i]+1)/2;
        empty[i] = a[i] - fill[i];
    }

    int sum_fill = accumulate(fill, fill+n, 0);
    int sum_empty = accumulate(empty, empty+n, 0);
    
    if(sum_fill <= w && w <= sum_fill + sum_empty){
        w -= sum_fill;
        for(const auto& container : containers){
            int i = container.first;
            if(w >= empty[i]){
                fill[i] += empty[i];
                w -= empty[i];
                empty[i] = 0;
            }
            else{
                fill[i] += w;
                empty[i] -= w;
                w = 0;
            }
            if(w == 0) break;
        }
        
        for(int i=0; i<n; i++){
            cout << fill[i] << " ";
        }
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}
