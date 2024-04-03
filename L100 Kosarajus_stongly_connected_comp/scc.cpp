void dfs(int i, vector<bool> &visited, vector<vector<int>>& adj, stack<int> &s){
        visited[i] = 1;
        
        for(auto x:adj[i]){
            if(!visited[x]){
                dfs(x, visited, adj, s);
            }
        }
        s.push(i);
    }
    
    void dfs2(int node,vector<bool> &visited, vector<vector<int>>& adjR, vector<int> &ans){
        visited[node] = 1;
        ans.push_back(node);
        for(auto x:adjR[node]){
            if(!visited[x]){
                dfs2(x, visited, adjR, ans);
            }
        }
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<bool> visited(V);
        stack<int> s;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,visited,adj,s);
            }
        }
        //GENERATING NEW ADJ LIST (REVERSING THE GRAPH)
        vector<vector<int>> adjR(V);
        
        for(int i=0;i<V;i++){
            visited[i] = 0 ;//FOR REUSING 
            for(auto x:adj[i]){
                adjR[x].push_back(i);
            }
        }
        vector<vector<int>> scc; //contains all strongly conn comp
        int cnt = 0 ;//strongly conn. comp.
        while(!s.empty()){
            int node = s.top();
            s.pop();
                
            if(!visited[node]){
                cnt++;
                vector<int> ans;
                dfs2(node,visited,adjR,ans);
                scc.push_back(ans);
               
            }
            
        }
        
        return cnt;
    }