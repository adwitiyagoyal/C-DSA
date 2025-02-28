void solve(Node *root, int k, int node, int &ans, vector<int> p){
    if(root == NULL){
        return;
    }
    
    if(root->data == node){
        int x = p.size();
        if(x>=k){
            ans = p[x-k];
        }
    }
    
    p.push_back(root->data);
    
    solve(root->left, k, node, ans, p);
    solve(root->right, k, node, ans, p);
}
int kthAncestor(Node *root, int k, int node)
{
    int ans = -1;
    vector<int> p;
    solve(root, k, node, ans, p);
    return ans;
}



//2nd approach without using extra space

Node* solve(Node *root, int k, int node, int &ans, int &count){
    if(root == NULL){
        return NULL;
    }
    
    
    if(root->data == node){
        return root;
    }
    
    
    
    Node* leftans = solve(root->left, k, node, ans, count);
    Node* rightans = solve(root->right, k, node, ans, count);
    
    if(leftans != NULL && rightans == NULL){
        count++;
        
        if(count == k){
            ans = root->data;
            return NULL;
        }
        
        
        return leftans;
        
    }
    else if(leftans == 0 && rightans != 0){
        count++;
        
        if(count == k){
            ans = root->data;
            return NULL;
        }
        return rightans;
        
    }
    else{
        return NULL;
    }
    
   
}
int kthAncestor(Node *root, int k, int node)
{
    int ans = -1;
    int count = 0;
    solve(root, k, node, ans, count);
    return ans;
}

//TC -o(n)
//SC -o(height)