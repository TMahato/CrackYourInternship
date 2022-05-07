class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = NULL , *p1 = NULL , *p2 = NULL ,*res = NULL , *curr = l1;
        while(curr){
            temp = curr ->next;
            curr -> next = p1;
            p1 = curr;
            curr = temp;
        }
        curr = l2;
        while(curr){
            temp = curr ->next;
            curr -> next = p2;
            p2 = curr;
            curr = temp;
        }
        
        ListNode ans(0) , *t = &ans;
        int sum =0;
        while(p1 or p2 or sum){
            if(p1){
                sum += p1->val;
                p1 = p1->next;
            }
            if(p2){
                sum += p2->val;
                p2 = p2->next;
            }
            t -> next = new ListNode(sum%10);
            sum/=10;
            t = t->next;
        }
        
        curr = ans.next;
        while(curr){
            temp = curr ->next;
            curr -> next = res;
            res = curr;
            curr = temp;
        }
        return res;
    }
};