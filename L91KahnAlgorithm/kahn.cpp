#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //Adjency list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);

    }

    //create Indegree vector

    vector<int> indegree(v);
    for(auto x:adj){
        for(auto y:x.second){
            indegree[y]++;
        }
    }

    //push o indegree in ans vector and queue
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    //implementing for whole graph

    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for(auto i:adj[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    return ans;

}