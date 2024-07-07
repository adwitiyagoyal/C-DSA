#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,list<pair<int,int>>> adj;

    for(int i=0;i<vec.size();i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int size = vec[i][2];

        adj[u].push_back({v,size});
        adj[v].push_back({u,size});
    }

    set<pair<int,int>> s;
    vector<int> dist(vertices);

    for(int i=0;i<vertices;i++){
        dist[i] = INT_MAX;
    }

    dist[source] = 0;
    s.insert({0,source});
    while(!s.empty()){
        auto top = *(s.begin());

        int node = top.second;
        int distance = top.first;

        s.erase(top);

        for(auto x:adj[node]){
            if(distance + x.second < dist[x.first]){
                auto record = s.find(make_pair(dist[x.first],x.first));

                if(record != s.end()){
                    s.erase(record);
                }

                dist[x.first] = distance + x.second;
                s.insert({dist[x.first],x.first});
            }
        }
    }
    return dist;
}