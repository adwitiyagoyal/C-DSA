 pair<int, int> solve(Node* root){
        if(root == NULL){
            pair<int, int> p = make_pair(0,0);
            return p;
        }
        
        pair<int, int> leftans = solve(root->left);
        pair<int, int> rightans = solve(root->right);
        
        pair<int, int> ans;
        
        ans.first = root->data + leftans.second + rightans.second;
        ans.second = max(leftans.first, leftans.second) + max(rightans.first, rightans.second);
        
        return ans;
        
        
    }
    
    int getMaxSum(Node *root) 
    {
        pair<int, int> p = solve(root);
        
        return max(p.first, p.second);
        
    }