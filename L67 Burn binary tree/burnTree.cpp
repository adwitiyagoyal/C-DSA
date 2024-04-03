TreeNode* result(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &map,int start){
        if(root == NULL){
            return NULL;
        }
        map[root] = NULL;
        TreeNode* res = NULL;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

            if(temp->val == start)
                res = temp;
            
            if(temp->left){
                q.push(temp->left);
                map[temp->left] = temp;
            }

            if(temp->right){
                q.push(temp->right);
                map[temp->right] = temp;
            }

        }
        return res;
    }

    int amountOfTime(TreeNode* root, int start) {
        int ans = 0;
        unordered_map<TreeNode*, bool> isDone ;
        unordered_map<TreeNode*, TreeNode*> map;
        TreeNode* res = result(root, map, start);
        
        isDone[res] = true;

        queue<TreeNode*> q;

        q.push(res);

        while(!q.empty()){
            
            int size = q.size();
            bool flag = false;
            for(int i=0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left && !isDone[temp->left]){
                    isDone[temp->left] = true;
                    q.push(temp->left);
                    flag = true;
                }
                if(temp->right && !isDone[temp->right]){
                    isDone[temp->right] = true;
                    q.push(temp->right);
                    flag = true;
                }
                if(map[temp] && !isDone[map[temp]]){
                    isDone[map[temp]] = true;
                    q.push(map[temp]);
                    flag = true;
                }
            }
            if(flag){
                ans++;
            }
        }

        return ans;


    }