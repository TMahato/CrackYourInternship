class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0) , *prev = dummy , *curr , *temp;
        dummy -> next = head;
        int i = 1;
        while(i++<left){
            prev = prev->next;
        }
        curr = prev ->next;
        
        while(i++<=right){
           temp = prev -> next;
           prev -> next = curr -> next;
           curr -> next = curr -> next -> next;
           prev -> next -> next = temp;
        }
        
        return dummy->next;
    }
};