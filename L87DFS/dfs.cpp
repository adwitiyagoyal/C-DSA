#include<unordered_map>
#include <list> 
void dfs(int i,vector<int> &comp,
 unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
     comp.push_back(i);
     visited[i] = true;

     for(int x:adj[i]){
        if(!visited[x]){
            dfs(x, comp, visited, adj);
        }
     }
 }

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    vector<vector<int>> ans;
    for(int i=0; i<V; i++){
        vector<int> comp;
        if(!visited[i]){
            dfs(i,comp,visited,adj);
            ans.push_back(comp);

        }
        
    }
    return ans;
    
}