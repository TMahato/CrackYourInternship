class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto x : nums){
            int idx = abs(x);
            if(nums[idx] < 0) return idx;
            
            nums[idx] = -nums[idx];
        }
        return -1;
    }
};