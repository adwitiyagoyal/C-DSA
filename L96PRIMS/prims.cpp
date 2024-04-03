#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int,list<pair<int, int>>> adj;
    for(int i=0;i<g.size();i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int size = g[i].second;

        adj[u].push_back({v,size});
        adj[v].push_back({u,size});
    }

    vector<int> dist(n+1,INT_MAX);
    vector<bool> mst(n+1,false);
    vector<int> parent(n+1,-1);

    dist[1] = 0;
    
    parent[1] = -1;

    for(int i=1 ;i<=n ;i++){
        
        int mini = INT_MAX;
        int u;
        for(int j=1;j<=n;j++){
            if(dist[j] < mini && !mst[j]){
                mini = dist[j];
                u = j;
            }
        }

        mst[u] = true;

        for(auto x:adj[u]){
            int node = x.first;
            int distance = x.second;

            if(dist[node] > distance && !mst[node]){
                parent[node] = u;
                dist[node] = distance;
                
            }
        }
    }
    vector<pair<pair<int, int>, int>> res;
    for(int i=2;i<=n;i++){
        res.push_back({{parent[i], i}, dist[i]});

    }
    return res;
}