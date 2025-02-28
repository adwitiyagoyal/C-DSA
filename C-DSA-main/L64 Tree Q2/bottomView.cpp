    vector <int> bottomView(Node *root) {
        map<int, int> bottomNode;
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
            
            bottomNode[hl] = temp->data;
            
            if(temp->left){
                q.push(make_pair(temp->left, hl-1));
            }
            
            if(temp->right){
                q.push(make_pair(temp->right, hl+1));
            }
        }
        for(auto i:bottomNode){
            ans.push_back(i.second);
        }
        return ans;
    }