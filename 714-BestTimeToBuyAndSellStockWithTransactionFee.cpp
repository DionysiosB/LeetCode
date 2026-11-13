class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy(-1e7), sell(0);
        for(int p = 0; p < prices.size(); p++){
            buy = std::max(buy, -prices[p] + sell);
            sell = std::max(sell, (prices[p] - fee) + buy);
        }
        return sell;
    }
};
