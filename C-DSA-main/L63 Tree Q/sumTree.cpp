pair<bool, int> isSum(Node* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        if(root->left == NULL && root->right == NULL){
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        }
        
        pair<bool, int> leftSide = isSum(root->left);
        pair<bool, int> rightSide = isSum(root->right);
        
        bool cond = root->data == leftSide.second+rightSide.second;
        
        pair<bool, int> ans;
        if(leftSide.first && rightSide.first && cond){
            ans.first = true;
            ans.second = 2*root->data;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    bool isSumTree(Node* root)
    {
        return isSum(root).first;
         
    }

    // tc -> o(n)
    // sc -> o(height)