int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<vector<pair<int,int>>> ad(V);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        vector<int> vis(V,0);
        int ans = 0;
        
        while(!pq.empty()){
            
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(vis[node]){
               continue;
            }
            vis[node] = 1;
            ans += wt;
            
            for(auto x:adj[node]){
                if(!vis[x[0]] ){
                    pq.push({x[1],x[0]});
                }
            }
        }
        return ans;
        
    }