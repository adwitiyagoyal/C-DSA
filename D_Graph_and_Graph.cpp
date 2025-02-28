#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
// int s(int i,int j,vector<vector<int>> &adj1,vector<vector<int>> &adj2,vector<vector<int>> &vis){
    
//     int ans = 1e9;
//     for(int x:adj1[i]){
//         for(int y:adj2[j]){
//             if(i==j && x==y){
//                 vis[x][y] = 1;
//                 return 0;
//             }

//             if(!vis[x][y]){
//                 vis[x][y] = 1;
//                 ans = min(ans,abs(x-y)+s(x,y,adj1,adj2,vis));
//             }
//         }
//     }
//     return ans ;
    
// }
void solve() {
    int n,s1,s2;
    cin>>n>>s1>>s2;
    int m1;
    cin>>m1;
    vector<vector<int>> adj1(n+1),adj2(n+1);
    set<p> a1,a2;
    for (int i = 0; i < m1; i++) {
        int u,v;
        cin>>u>>v;
        if(u>v){
            swap(u,v);
        }
        adj1[u].push_back(v);
        adj1[v].push_back(u);
        a1.insert({u,v});
    }
    int m2;
    cin>>m2;
    for (int i = 0; i < m2; i++) {
        int u,v;
        cin>>u>>v;
        if(u>v){
            swap(u,v);
        }
        adj2[u].push_back(v);
        adj2[v].push_back(u);
        a2.insert({u,v});
    }
    vector<vector<int>> dist(n+1,vector<int>(n+1,1e9));
    set<pair<int,p>> s;
    s.insert({0,{s1,s2}});
    dist[s1][s2] = 0;
    while(!s.empty()){
        int n1 = s.begin()->second.first;
        int n2 = s.begin()->second.second;
        int d = s.begin()->first;
        s.erase(s.begin());

        for(auto x:adj1[n1]){
            for(auto y:adj2[n2]){
                if(dist[x][y] > abs(x-y) + dist[n1][n2]){
                    s.erase({dist[x][y],{x,y}});
                    dist[x][y] = abs(x-y) + dist[n1][n2];
                    s.insert({dist[x][y],{x,y}});
                }
            }
        }
    }
    int ans = 1e9;
    for(auto x:a1){
        if(a2.find(x) != a2.end()){
             
            ans = min(ans,dist[x.first][x.first]);
        }
    }
    if(ans == 1e9){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
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