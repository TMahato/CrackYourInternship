class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *head1 = new ListNode(0) , *h1 = head1;
        ListNode *head2 = new ListNode(0) , *h2 = head2;
        
        while(head){
            if(head->val < x){
                head1->next = head;
                head1 = head1->next;
            }
            else{
                head2->next = head;
                head2 = head2->next;
            }
            
            head = head->next;
        }
        head2->next = NULL;
        head1->next = h2->next;
        
        return h1->next;
    }
};