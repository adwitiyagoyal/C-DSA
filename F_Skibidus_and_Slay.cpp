#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        a[i]--;
    }
    vector<vector<int>> adj(n);
    vector<int> ans(n,0);
    for (int i = 0; i < n-1; i++) {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        map<int,int> m;
        for(int x:adj[i]){
            if(a[i] == a[x]){
                ans[a[x]] = 1;
            }
            if(m.find(a[x]) != m.end()){
                ans[a[x]] = 1;
            }
            m[a[x]]++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout<<ans[i];
    }
    cout<<"\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}