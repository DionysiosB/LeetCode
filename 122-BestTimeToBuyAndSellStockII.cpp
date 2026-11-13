class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total(0);
        for(int p = 1; p < prices.size(); p++){total += std::max(prices[p] - prices[p - 1], 0);}
        return total;
    }
};
