void leftTraversal(node* root, vector<int> &ans){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return ;
    }

    ans.push_back(root->data);

    if(root->left){
        leftTraversal(root->left, ans);
    }
    else{
        leftTraversal(root->right, ans);
    }
}

void rightTraversal(node* root, vector<int> &ans){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return ;
    }

    if(root->right){
        rightTraversal(root->right, ans);
    }
    else{
        rightTraversal(root->left, ans);
    }
    ans.push_back(root->data);
}

void leafTraversal(node* root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
    }
    
    leafTraversal(root->left);
    leafTraversal(root->right);
}

vector<int> boundaryTraversal(node* root){\
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    ans.push_back(root->data);

    //left side
    if(root->left)
        leftTraversal(root->left, ans);

    //leaf
    if(root->left||root->right){
        leafTraversal(root, ans);
    }

    //right side
    if(root->right)
        rightTraversal(root->right, ans);

    return ans;

}

