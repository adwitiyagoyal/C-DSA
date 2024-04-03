ListNode* mid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;

        if(head == NULL){
            return NULL;
        }

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void detach(ListNode* &head,ListNode* &slow){
        ListNode* prev = NULL;
        ListNode* prev1 = head;
        while(head != NULL){
            prev = head;
            head = head->next;
            if(head == slow){
                break;
            }
        }
        head = prev1;
        if(prev)
            prev->next = NULL;
        return;
    }
    ListNode* merge(ListNode* left, ListNode* right){
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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* middle = mid(head);
        detach(head, middle);

        ListNode* left = sortList(head);
        ListNode* right = sortList(middle);

        ListNode* res = merge(left, right);
        return res;
    }