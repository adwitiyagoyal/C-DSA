#include<unordered_map>
#include<set>
#include<queue>
#include<iostream>

void bfs( unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited,
    vector<int> &ans,int i){
        queue<int> q;
        q.push(i);
        visited[i] = true;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            ans.push_back(front);
            for(auto x:adjlist[front]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
    void print(unordered_map<int, set<int>> adjlist){
        for(auto x:adjlist){
            cout<<x.first<<"->";
            for(auto y:x.second){
                cout<<y<<" ";
            }
            cout<<endl;
        }

    }
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Adjacency list created
    unordered_map<int, set<int>> adjlist(n);
    for(int i=0;i<adj.size();i++){
        int u = adj[i][0];
        int v = adj[i][1];

        adjlist[u].insert(v);
        adjlist[v].insert(u);

    }
    // print(adjlist);
    unordered_map<int, bool> visited;
    vector<int> ans;

    for(int i=0;i<n;i++){
        if(!visited[i])
        bfs(adjlist, visited, ans, i);
    }
    return ans;

}