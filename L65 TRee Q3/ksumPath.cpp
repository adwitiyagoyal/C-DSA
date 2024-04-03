   //NOT THE BEST APPROACH 
   //SEVERAL OTHER APPROACH ARE THERE USING HASHMAP
   
   void solve(Node* root, int k, int &count, vector<int> p){
        if(root == NULL){
            return ;
        }
        p.push_back(root->data);
        
        solve(root->left, k, count, p);
        solve(root->right, k, count, p);
        
        int n = p.size();
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            sum += p[i];
            if(sum == k){
                count++;
            }
        }
        p.pop_back();
        
    }
    int sumK(Node *root,int k)
    {
        int count = 0;
        vector<int> p;
        
        solve(root,k,count,p);
        return count;
    }