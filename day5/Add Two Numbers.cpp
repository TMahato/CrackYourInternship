class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode *temp = new ListNode(0), *ans = temp;
        
        while(l1 or l2 or sum){
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum+= l2->val;
                l2 = l2->next;
            }
            ListNode *newNode = new ListNode(sum%10);
            sum/=10;
            temp->next = newNode;
            temp = temp->next;
        }
        return ans->next;
    }
};