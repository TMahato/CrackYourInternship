class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() , ans = 0;
        unordered_map<int,int> m;
        m[0]++;
        int pref = 0;
        
        for(auto x : nums){
            pref += x;
            int rem = (pref % k + k) % k;
            ans += m[rem]++;
        }
        
        return ans;
    }
};