#include<iostream>
#include<vector>

bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int s = 0, e = ans.size()-1;
        while(s<e){
            if(ans[s] != ans[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }