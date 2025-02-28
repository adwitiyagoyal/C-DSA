int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left,right)+1;
        return ans;
    }

    bool nodeBalance(TreeNode* root){
        if(root == NULL){
            return true;
        }
        int left = height(root->left);
        int right = height(root->right);
        cout<<left<<" "<<right;
        int res = abs(left - right);

        if(res <= 1){
            return true;
        } 
        return false;
    }

    //WE can skip node baLance function and write code in this fn only
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        if(nodeBalance(root) && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        
        return false;  
    }