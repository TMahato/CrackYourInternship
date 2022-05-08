class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> res;
        set<vector<int>> store;  
        
        for(int i=0; i<n ;i++){
            for(int j=i+1; j<n-2; j++){
                int new_target  =  target - nums[i] - nums[j];
                
                int l = j+1 , r=n-1;
                while(l<r){
                    int sum = nums[l]+nums[r];
                    if(sum < new_target) l++;
                    else if(sum > new_target) r--;
                    else{
                        store.insert({nums[i] , nums[j] , nums[l] , nums[r]});
                        l++;r--;
                    }
                }
            }
        }
        for(auto i : store){
            res.push_back(i);  
        }
        
        return res;
    }
};