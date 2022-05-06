class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        
        ListNode* temp = head;
        
        while(temp){
            while(temp->next and temp->val == temp->next->val)
                temp->next=temp->next->next;
            
            temp = temp->next;
        }
        return head;
    }
};