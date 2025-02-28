class Solution {
private:
      ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fut = NULL;
        while(curr != NULL){
            fut = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = fut;
        }
        return prev;
    }
    void insert(ListNode* &head, ListNode* &tail, int data){
        ListNode* temp = new ListNode(data);

        if(head == NULL){
            head = temp;
            tail = temp;
        }

        else{
            tail->next = temp;
            tail = temp;
        }

    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r1 = reverse(l1);
        ListNode* r2 = reverse(l2);
        
        
        int carry = 0;
        int digit = 0;
        int sum = 0;

        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(r1 != NULL || r2 != NULL || carry!=0){
            int val1 = 0;
            if(r1 != NULL){
                val1 = r1->val;
                r1 = r1->next;
            }
            int val2 = 0;
            if(r2 != NULL){
                val2 = r2->val;
                r2 = r2->next; 
            }
            sum = val1 + val2 + carry;
            carry = sum / 10;
            digit = sum % 10;
            insert(ansHead,ansTail,digit); 
            
            
        }

        ansHead = reverse(ansHead);
        return ansHead;
        
    }
};