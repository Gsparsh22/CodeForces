#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = i;
    }
    int max = 0;
    int max_index = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    for(int i = 0; i < max/m; ++i){
        for(int j = 0; j < n; ++j){
            if(a[j] == max){
                a[j] = 0;
                b[j] = 0;
            }
        }
        max = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > max) {
                max = a[i];
                max_index = i;
            }
        }
    }
    
    return 0;
}
