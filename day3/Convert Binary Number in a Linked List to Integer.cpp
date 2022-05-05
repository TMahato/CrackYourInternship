class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0 , l = 0;
        vector<int> v;
        
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        
        for(int i = v.size()-1 ; i >=0 ; i--){
            ans += v[i]*(1<<l);
            l++;
        }
        return ans;
    }
};