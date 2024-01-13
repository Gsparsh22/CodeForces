#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 6;

int BIT[MAXN];

void update(int idx, int val){
    for(; idx < MAXN; idx += idx & -idx)
        BIT[idx] += val;
}

int get_index(int idx){
    int sum = 0;
    for(; idx > 0; idx -= idx & -idx)
        sum += BIT[idx];
    return sum;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> ans;
    vector<int> a;
    map<int, int> mp;
    int l, r;

    for (int i = 0; i <= MAXN; ++i) {
        BIT[i] = 0;
    }

    for(int i=0; i<n; i++){
        cin >> l >> r;
        ans.push_back(make_pair(l, r));
        a.push_back(r);
    }

    sort(ans.begin(), ans.end());
    sort(a.begin(), a.end());

    for(int i=0; i<a.size(); i++){
        mp[a[i]] = i;
        update(i + 1, 1);
    }

    int sum = 0;
    for(int i=0; i<ans.size(); i++){
        update(mp[ans[i].second] + 1, -1);
        sum += get_index(mp[ans[i].second]);
    }

    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}