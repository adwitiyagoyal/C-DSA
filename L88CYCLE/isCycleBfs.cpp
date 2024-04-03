#include<queue>
#include<unordered_map>
#include<list>

bool iscycle(int i, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj,unordered_map<int, int> &parent){
    queue<int> q;
    q.push(i);
    visited[i] = true;
    parent[i] = -1;
    
    while(!q.empty()){
        int front = q.front();
        q.pop();
        visited[front] = true;

        for(auto x:adj[front]){
            if(visited[x]){
                if(parent[front] != x){
                    return true;
                }
            }
             if(!visited[x]){
                q.push(x);
                parent[x] = front;
                visited[x] = true;
            }
            
           

            
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, list<int>> adj;
    unordered_map<int, int> parent;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool check = iscycle(i, visited, adj, parent);
            if(check){
                return "Yes";
            }
        }
    }
    return "No";
}