vector<vector<int>> verticalTraversal(TreeNode* root) {
        //map<hd, map<level, vector<int>>>
        map<int, map<int, vector<int>>> nodes;

        //queue<pair<TreeNode*,pair<hd,level>>> q
        queue< pair <TreeNode*, pair<int, int>>> q;
       
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }

        q.push( make_pair(root, make_pair(0, 0)));

        while(!q.empty()){
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            int hd = temp.second.first; //horizontal coordinate
            int lvl = temp.second.second; //verticcal coordinate

            TreeNode* frontNode = temp.first;

            nodes[hd][lvl].push_back(frontNode->val);

            
            if(frontNode->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1, lvl+1)));
            }
            if(frontNode->left){
                q.push(make_pair(frontNode->left,make_pair(hd-1, lvl+1)));
            }
        }

        for(auto i:nodes){    
            vector<int> res;     
            for(auto k:(i.second)){
                
                for(int j:k.second){
                    res.push_back(j);
                } 
                
            }
            ans.push_back(res);
        }
        return ans;
    }