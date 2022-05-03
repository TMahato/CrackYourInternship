class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn = INT_MAX;
        for(auto it : prices){
            int mn = min(mn, it);
            ans = max(ans , it - mn);
        }
        return ans;
    }
};