class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        int i = 0 , j = n-k;
        
        int sum = accumulate(cardPoints.begin() + j , cardPoints.end() , 0) , ans = sum;
        
        while(k--) {
            sum += cardPoints[i++] - cardPoints[j++];
            
            ans = max(ans , sum);
        }
        
        return ans;
    }
};