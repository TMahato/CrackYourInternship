class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        if(lists.size() == 1) return lists[0];
        
        ListNode *head = merge(lists[0] , lists[1]);
        for(int i=2;i<lists.size() ;i++){
            head = merge(head , lists[i]);
        }
        return head;
    }
    ListNode* merge(ListNode* l1 , ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* ptr = dummy;
        while(l1 and l2){
            if(l1->val <= l2->val){
                ptr->next = l1;
                l1= l1->next;
            }
            else{
                ptr->next = l2;
                l2=l2->next;
            }
            
            ptr = ptr->next;
        }
        if(l1){
            ptr->next = l1;
            l1= l1->next;
        }
        if(l2){
            ptr->next = l2;
            l2=l2->next;
        }
        
        return dummy->next;
    }
};