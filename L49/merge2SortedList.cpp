ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left == NULL){
            return right;
        }
        if(right == NULL){
            return left;
        }
        ListNode* res = NULL;
        ListNode* temp = NULL;

        while(left != NULL && right != NULL){
            if(!res){
                if(left->val < right->val){
                    ListNode* num = new ListNode(left->val);
                    res = num;
                    left = left->next;
                }
                else{
                    ListNode* num = new ListNode(right->val);
                    res = num;
                    right = right->next;
                }
                temp = res; 
            }
            else{
                if(left->val < right->val){
                    ListNode* num = new ListNode(left->val);
                    res->next = num; 
                    left = left->next;
                }
                else{
                    ListNode* num = new ListNode(right->val);
                    res->next = num;
                    right = right->next;
                }
                res = res->next;
            }
        }
        while(left != NULL){
            res->next = left;
            res = res->next;
            left = left->next;
        }
        while(right != NULL){
            res->next = right;
            res = res->next;
            right = right->next;
        }
        return temp;
    }