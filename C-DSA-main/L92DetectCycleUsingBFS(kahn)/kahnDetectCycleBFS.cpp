#include <bits/stdc++.h> 

bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
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
    //vector<int> ans;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    int cnt = 0;
    //implementing for whole graph

    while(!q.empty()){
        int front = q.front();
        q.pop();
        cnt++;

        for(auto i:adj[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    if(cnt == v){
        return false;
    }
    return true;
}