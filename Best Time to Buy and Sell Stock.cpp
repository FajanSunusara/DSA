class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();  
        int maxProfit = 0;
        int minPrice = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            
            int currentProfit = prices[i] - minPrice;
            
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
        
        return maxProfit;
    }
};

