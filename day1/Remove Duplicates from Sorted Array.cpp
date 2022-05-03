class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int l = 0;
        
        for(int i = 1; i<nums.size() ; i++){
            if(nums[l] != nums[i]) {
                nums[++l] = nums[i];
            }
        }
        return l+1;
    }
};