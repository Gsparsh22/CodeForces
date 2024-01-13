#include <bits/stdc++.h>
using namespace std;

void cin_array(char a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char ls[9];
        cin_array(ls, 9);

        for (int i = 0; i < 3; ++i) {
            if (count(ls + i * 3, ls + (i + 1) * 3, '?') == 1) {
                set<char> letters{'A', 'B', 'C'};
                for (int j = i * 3; j < (i + 1) * 3; ++j)
                    letters.erase(ls[j]);
                cout << *letters.begin() << endl;
                break;
            }
        }
    }

    return 0;
}
