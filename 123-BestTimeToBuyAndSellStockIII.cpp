class Solution {
public:
    int maxProfit(vector<int>& prices) {

        const int n = prices.size();
        std::vector<int> v(n, 0);
        int mnp = prices[0];
        for(long p = 1; p < n; p++){
            mnp = std::min(mnp, prices[p]);
            v[p] = std::max(v[p - 1], prices[p] - mnp);
        }

        int ans(v.back()), stp(0), mxp(prices.back());
        for(long p = v.size() - 2; p > 0; p--){
            mxp = std::max(mxp, prices[p]);
            stp = std::max(stp, mxp - prices[p]);
            ans = std::max(ans, v[p - 1] + stp);
        }

        return ans;
    }
};
