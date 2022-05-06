class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        for(int i=0;i<v.size()/2 ;i++){
            if(v[i] != v[v.size()-1-i]) return false;
        }
        return true;
    }
};