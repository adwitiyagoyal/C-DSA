#include<bits/stdc++.h>
void dfs(int i,vector<int> &disc,vector<int> &low,
unordered_map<int, list<int>> &adj,int &timer,unordered_map<int, bool> &vis,
vector<vector<int>> &res,int parent){

    vis[i] = 1;
    low[i] = disc[i] = timer++;

    for(auto nbr:adj[i]){
        if(nbr == parent){
            continue;
        }

        if(!vis[nbr]){
            dfs(nbr,disc,low,adj,timer,vis,res,i);
            low[i] = min(low[i], low[nbr]); // updation of low of parent on revisit
            
            //checking link btw parent and nbr is bridge
            if(low[nbr] > disc[i]){
                vector<int> ans;
                ans.push_back(i);
                ans.push_back(nbr);
                res.push_back(ans);
            }
        }
        else{
            //BACKEDGE
            low[i] = min(low[i], disc[nbr]);
        }
    } 
}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    unordered_map<int, list<int>> adj;

    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(v, -1);
    vector<int> low(v, -1);
    int parent = -1;
    unordered_map<int, bool> vis;

    vector<vector<int>> res;

    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,disc,low,adj,timer,vis,res,parent);
        }
    }
    return res;

}