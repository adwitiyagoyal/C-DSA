
int height(node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;
    return ans;
}

int diameter(node* root){
    if(root == NULL)P{
        return 0;
    }
    // 3options are there for max diameter
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op3, max(op1, op2));

    return ans;
}
//tc ->o(n2)because of use of height fn used


pair<int, int> diameterFast(TreeNode* root){
        if(root == NULL){
            pair<int, int> p = make_pair(0,0);
            return p;
        }
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int o1 = left.first;
        int o2 = right.first;
        int o3 = left.second + right.second + 1;

        pair<int, int> ans ;
        ans.first = max(o3, max(o1, o2));
        ans.second = max(left.second, right.second) + 1;
        return ans;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameterFast(root).first - 1;

    }
    //TC -> O(n)