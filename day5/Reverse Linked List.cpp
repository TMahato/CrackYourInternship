class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL , *prev =NULL, *curr = head;
        while(curr){
            temp = curr->next;
            curr->next = prev;//value of prev in the last iteration(smaller) goes to curr->next 
            prev = curr;//value of prev becomes biggeer
            curr = temp;
        }
        return prev;
    }
};