class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int cnt = 0;
        unordered_map<int,int> m;
        m[0] = 1;
        for(auto x : nums){
            sum += x;
            cnt += m[sum - k];
            m[sum]++;
        }
        return cnt;
    }
};