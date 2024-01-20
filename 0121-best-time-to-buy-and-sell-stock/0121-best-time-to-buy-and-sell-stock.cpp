class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > maxProfit){
                maxProfit = prices[i] - minPrice;
            }
        
        }
        return maxProfit;
        
    }
};