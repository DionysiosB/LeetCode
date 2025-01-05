class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ma(1000), mb(1000);
        for(int p = 0; p < prices.size(); p++){
            if(prices[p] <= ma){mb = ma; ma = prices[p];}
            else if(prices[p] < mb){mb = prices[p];}
        }
        return money - (ma + mb <= money) * (ma + mb);
    }
};
