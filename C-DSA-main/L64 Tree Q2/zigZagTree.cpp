 vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root == NULL){
    	    return result;
    	}
    	queue<Node*> q;
    	q.push(root);
    	bool isLeftToRight = true;
    	
    	while(!q.empty()){
        	int n = q.size();
        	vector<int> ans(n);
        	
        	for(int i=0; i<n; i++){
        	    
        	    Node* x = q.front();
        	    q.pop();
        	    
        	    int index = isLeftToRight ? i : n-i-1;
        	    ans[index] = x->data;
        	    
        	    if(x->left){
        	        q.push(x->left);
        	    }
        	    if(x->right){
        	        q.push(x->right);
        	    }
        	}
        	isLeftToRight = !isLeftToRight;
        	for(auto i:ans){
        	    result.push_back(i);
        	}
    	
    	}
    	return result;
    	
    	
    }

    //TC -> o(n)
    //sc -> o(n)