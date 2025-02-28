#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void dfs(int i, int p,vector<ll> &l,vector<ll> &r,vector<vector<ll>> &adj,vector<ll> &val){
    ll a = 0;
    for(auto x:adj[i]){
      
        if(x!=p){
            dfs(x,i,l,r,adj,val);
            a = max(a,val[x]);
        }
    }
    val[i] = max(l[i],min(r[i],a));
}
void dfs1(int i, int p,vector<vector<ll>> &adj,vector<ll> &val,vector<ll> &add){
    for(auto x:adj[i]){
        
        if(x!=p){
            dfs1(x,i,adj,val,add);
            add[i] += add[x];
            if(val[x]>val[i]){
                add[i] += val[x]-val[i];
            }
        }
    }
}
void solve() {
    int n;
    cin>>n;
    vector<ll> l(n+1),r(n+1);
    for (int i = 0; i < n; i++) {
        cin>>l[i+1]>>r[i+1];
    }
    vector<vector<ll>> adj(n+1);
    vector<ll> add(n+1,0);

    for (int i = 0; i < n-1; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> val(n+1,0);
    dfs(1,0,l,r,adj,val);
    dfs1(1,0,adj,val,add);
    cout<<val[1]+add[1]<<endl;

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