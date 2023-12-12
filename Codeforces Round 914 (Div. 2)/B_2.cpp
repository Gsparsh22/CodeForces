#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> prefix(n+1);
        for(int i=n-1;i>=0;i--){
            prefix[i] = prefix[i+1] + a[i];
        }
        vector<int> ans(n);
        priority_queue<int> q;
        for(int i=n-1;i>=0;i--){
            q.push(-a[i]);
            while(prefix[i] - 1LL*a[i]*q.size() < 0){
                prefix[i] += q.top();
                q.pop();
            }
            ans[i] = q.size();
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
