 vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
       vector<int> dis(V,1e8);
       
       dis[S] = 0;
       //WE CAN FIND THE SHORTEST PATH FROM N-1 iteration
       for(int i=0;i<V-1;i++){
           for(auto it:edges){
               int u = it[0];
               int v = it[1];
               int w = it[2];
               
               if(dis[u] != 1e8 && dis[u] + w < dis[v]){
                   dis[v] = dis[u] + w;
               } 
           }
       }
       
       
       // FOR NEGATIVE CYCLE
        for(auto it:edges){
           int u = it[0];
           int v = it[1];
           int w = it[2];
           //IF CHANGES ARE MADE AFTER N-1 ITERATION ABOVE THEN THE NEGATIVE CYCLE ARE PERSENt
           if(dis[u] != 1e8 && dis[u] + w < dis[v]){
               return {-1};
           } 
       }
       
       return dis;
    }
    