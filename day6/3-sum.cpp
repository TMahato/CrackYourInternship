class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> res;
        
        for(int i=0;i<n-2;i++){
            if(i==0 || (nums[i]!=nums[i-1] and i>0)){
                int l=i+1, r=n-1;
                while(l<r){
                    int sum = nums[i] + nums[l] + nums[r];
                    if(sum==0){
                        vector<int> tm;
                        tm.push_back(nums[i]);
                        tm.push_back(nums[l]);
                        tm.push_back(nums[r]);
                        
                        res.push_back(tm);
                        
                        while(l<r and nums[l] == nums[l+1]) l++;
                        while(l<r and nums[r]==nums[r-1]) r--;
                        
                        l++;r--;
                    }
                    else if(sum<0) l++;
                    else r--;
                }
            }
        }
        return res;
    }
};