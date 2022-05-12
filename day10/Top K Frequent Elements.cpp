class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int ,int> fq;
        for(auto it : nums) fq[it]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto it : fq){
            pq.push({it.second , it.first});
            if(pq.size() > fq.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};