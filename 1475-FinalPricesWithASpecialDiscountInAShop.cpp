class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int p = 0; p < prices.size(); p++){
            int disc(0);
            for(int u = p + 1; !disc && u < prices.size(); u++){
                if(disc < prices[u] && prices[u] <= prices[p]){disc = prices[u];}
            }
            prices[p] -= disc;
        }

        return prices;
    }
};
