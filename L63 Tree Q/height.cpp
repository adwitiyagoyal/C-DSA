   int maxDepth(node* root) {
        if(root == NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        int ans = max(left,right) + 1;
        return ans;
    }

    //space complexity -> o(height)
    //TC -> o(n)