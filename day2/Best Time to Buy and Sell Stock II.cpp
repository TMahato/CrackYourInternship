class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() -1 ;
        
        int i=0 , sell , buy , profit = 0;
        while(i < n){
            while(i<n and prices[i] >= prices[i+1] ) i++;
            
            buy = prices[i];
            
            while(i<n and prices[i] <= prices[i+1]) i++;
            sell = prices[i];
            
            profit += sell - buy;
        }
        
        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int res = 0;
        for(int i= 1;i< n;i++){
            res += max(prices[i] - prices[i-1] , 0);
        }
        return res;
    }
};