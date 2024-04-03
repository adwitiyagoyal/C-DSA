#include<queue>
#include<unordered_map>
#include<list>

bool iscycle(int i, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj,int parent){
    
    visited[i] = true;
    
    
    for(auto x:adj[i]){
        if(!visited[x]){
            bool ischeck = iscycle(x,visited,adj,i);
            if(ischeck){
                return true;
            }
        
        }
        else if(x != parent){
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, list<int>> adj;
    //unordered_map<int, int> parent;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool check = iscycle(i, visited, adj, -1);
            if(check){
                return "Yes";
            }
        }
    }
    return "No";
}