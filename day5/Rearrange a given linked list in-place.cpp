class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head or !head->next or !head->next->next) return;
        
        stack<ListNode*> s;
        ListNode* temp = head;
        while(temp){
            s.push(temp);
            temp = temp->next;
        }
        int l = s.size();
        int i = 0;
        ListNode *ans = head;
        
        while(i++ < l/2){
            ListNode* last = s.top();
            s.pop();
            last->next = ans -> next;
            ans->next = last;
            ans = ans->next->next;
        }
        ans->next = NULL;
    }
};