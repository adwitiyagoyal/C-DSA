vector<int> leftView(Node *root)
{
   map<int, int> leftNode;
   queue<pair<Node*, int>> q;
   
   vector<int> ans;
   if(root == NULL){
       return ans;
   }
   
   q.push(make_pair(root, 0));
   
   while(!q.empty()){
        pair<Node*, int> p = q.front();
        q.pop();
       
        int vh = p.second;
        Node* temp = p.first;
            
        leftNode[vh] = temp->data;
            
        if(temp->right){
            q.push(make_pair(temp->right, vh+1));
        }
        
        if(temp->left){
            q.push(make_pair(temp->left, vh+1));
        }
    }
    for(auto i:leftNode){
        ans.push_back(i.second);
    }
    return ans;
}