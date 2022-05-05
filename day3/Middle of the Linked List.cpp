class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int l = 0;
        auto ans = head;
        while(head->next != NULL){
            l++;
            head = head->next;
        }
        if(l&1){
            l/=2;
            l++;
        }
        else l/=2;
        
        for(int i=0 ; i<l ; i++){
            ans = ans->next;
        }
        return ans;
    }
};