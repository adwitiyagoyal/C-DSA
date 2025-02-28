#include <bits/stdc++.h>
using namespace std;
int ans,t1,t2,cnt,par;
int dfs(int x,int p,vector<vector<int>> &adj,vector<int> &m){
    if(ans!=0)return 0;
    int c = 0;
    if(m[x] == t1){
        c++;
    }
    for(int i:adj[x]){
        if(i!=p){
            int y = dfs(i,x,adj,m);
            if(x==1 && y==cnt){
                par = i;
            }
            c+=y;
            if(y<cnt && m[x] == t2){
                ans = x;
                return 0;
            }
        }
    }
    return c;
}
void solve() {
    int n;
    cin>>n;
    vector<int> m(n+1);
    priority_queue<int> pq;
    set<int> s;
    vector<vector<int>> adj(n+1);
    ans = 0;
    par = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        m[i+1] = x;
        if(s.find(x) == s.end()){
            pq.push(x);
            s.insert(x);
        }
    }

    for (int i = 0; i < n-1; i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(s.size() == 1){
        cout<<0<<endl;
        return;
    }
    cnt = 0;

    t1 = pq.top();
    pq.pop();
    t2 = pq.top();
    for (int i = 1; i <= n; i++) {
        if(m[i] == t1){
            cnt++;
        }
    }
    int g = dfs(1,0,adj,m);
    if(ans!=0){
        cout<<ans<<"\n";
        return;
    }
    else{
        for(int j:adj[1]){
            if(j!=par){
                ans = j;
                break;
            }
        }
        cout<<ans<<"\n";
        return;
    }
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
