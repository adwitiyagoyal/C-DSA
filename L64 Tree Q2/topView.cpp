    vector <int> topView(Node *root) {
        map<int, int> topNode;
        queue<pair<Node*, int>> q;
        
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> p = q.front();
            q.pop();
            
            int hl = p.second;
            Node* temp = p.first;
            
            //To find if for hl value any another data is mapped or not
            if(topNode.find(hd) == topNode.end())
            topNode[hl] = temp->data;
            
            if(temp->left){
                q.push(make_pair(temp->left, hl-1));
            }
            
            if(temp->right){
                q.push(make_pair(temp->right, hl+1));
            }
        }
        for(auto i:topNode){
            ans.push_back(i.second);
        }
        return ans;
    }