class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cash(0), last(0);
        bool pos(false);
        for(int p = 0; p < prices.size(); p++){
            int prev = (p > 0) ? prices[p - 1] : prices[p];
            int cur = prices[p];
            int next = (p + 1 < prices.size()) ? prices[p + 1] : prices[p];
            if(!pos && prev >= cur && cur <= next){pos = 1; cash -= cur; last = cur;}
            if(pos && prev <= cur && cur >= next){pos = 0; cash += cur;} 
        }
        
        return cash + pos * last;
    }
};
