class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        sort(stockPrices.begin(), stockPrices.end());
        long long num(0), den(0), cnt(0);
        for(int p = 1; p < stockPrices.size(); p++){
            long long dx = stockPrices[p][0] - stockPrices[p - 1][0];
            long long dy = stockPrices[p][1] - stockPrices[p - 1][1];
            cnt += (den == 0) || (dx * num != dy * den);
            num = dy; den = dx;
        }

        return cnt;
    }
};
