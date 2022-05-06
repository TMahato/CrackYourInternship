class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy , *temp;
        dummy = new ListNode();
        temp = dummy;
        
        while(list1 and list2){
            int a=list1->val , b=list2->val;
            if(a<=b){
                temp->next = list1;
                list1=list1->next;
            }
            else{
                temp->next = list2;
                list2=list2->next;
            }
            temp = temp->next;
        }
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;
        
        return dummy->next;
    }
};