class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        
        int currentMax(0), profit(0);
        for(int p = prices.size() - 1; p >= 0; p--){
            profit = ((currentMax - prices[p]) > profit) ? (currentMax - prices[p]) : profit;
            currentMax = (currentMax > prices[p]) ? currentMax : prices[p];
        }
        
        return profit;
    }
};
