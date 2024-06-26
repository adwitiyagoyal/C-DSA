#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
#include <stack> 
void dfs(int i,vector<bool> &visited, unordered_map<int,list<int>> &adj,stack<int> &s){
    visited[i] = true;

    for(auto x:adj[i]){
        if(!visited[x]){
            dfs(x,visited,adj,s);
        }
        
    }
    s.push(i);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    vector<bool> visited(v);
    stack<int> s;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,visited,adj,s);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        //cout<<s.top();
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}