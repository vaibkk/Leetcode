class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        
        int min_price = prices[0];
        int max_profit = 0;
        
        for(int j = 1; j<prices.size(); j++)
        {
            max_profit = max(max_profit, prices[j] - min_price);
            min_price = min(min_price, prices[j]);            
        }
        return max_profit;
    }
};