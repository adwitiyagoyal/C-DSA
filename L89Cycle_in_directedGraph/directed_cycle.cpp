#include<unordered_map>
#include<list>

bool iscycle(int i,  unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited, unordered_map<int, list<int>> adj){
    visited[i] = true;
    dfsvisited[i] = true;

    for(auto x:adj[i]){
        if(!visited[x]){
            bool check = iscycle(x, visited, dfsvisited, adj);
            if(check){
                return true;
            }

        }
        else if(visited[x] && dfsvisited[x]){
            return true;
        }
    }

    dfsvisited[i] = 0;
    return false;
}
bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;

    for(int i=0; i<v; i++){
        if(!visited[i]){
            bool check = iscycle(i, visited, dfsvisited, adj);
            if(check){
                return true;
            }
        }
    }
    return false;


}