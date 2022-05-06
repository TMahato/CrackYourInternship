class Solution {
public:
    ListNode* removeElements(ListNode* head, int k) {
        if(!head) return NULL;
        if(head->val == k) return removeElements(head->next,k);
        
        ListNode* temp = head;
        while(temp){
            if(temp->next and temp->next->val == k)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        return head;
    }
};