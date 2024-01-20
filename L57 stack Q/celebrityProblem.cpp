 int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(!s.empty() && s.size()!=1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(M[a][b] == 0 && M[b][a] == 1){
                s.push(a);
            }
            if(M[a][b] == 1 && M[b][a] == 0){
                s.push(b);
            }
        }
        
        if(s.empty()){
            return -1;
        }
        
        int cnt =0;
        int k =s.top();
        
        for(int i=0;i<n;i++){
            if(M[k][i]==0){
                cnt++;
            }
            if(M[i][k]==1&&i!=k){
                cnt++;
            }
        }
        
        if(cnt == 2*n - 1){
            return k;
        }
        return -1;
    }