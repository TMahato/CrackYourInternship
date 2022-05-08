class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0,head) , *prev = dummy ;
        
        while(head){
            bool c = 0;
            if(head->next and head->val == head->next->val){
                while(head->next and head->val == head->next->val){
                    head = head->next;
                }
                c=1;
            }
            
            if(c) prev->next = head->next;
            else prev = prev->next;
            
            head =head->next;
        }
        return dummy->next;
    }
};