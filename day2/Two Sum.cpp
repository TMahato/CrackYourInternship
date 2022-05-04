class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();
        vector<int> res;
        
        for(int i=0; i < n; i++){
            int findNo = target - nums[i];
            
            if(m.find(findNo) != m.end()){
                res.push_back(m[findNo]);
                res.push_back(i);
                
                break;
            }
            m[nums[i]] = i;
        }
        
        return res;
    }
};