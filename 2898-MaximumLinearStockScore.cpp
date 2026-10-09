class Solution {
public:
    long long maxScore(vector<int>& prices) {

        std::unordered_map<long long, std::vector<long long> > f;
        for(int p = 0; p < prices.size(); p++){
            long long tst = prices[p] - (p + 1);
            f[tst].push_back(prices[p]);
        }

        long long mxs(0);
        for(std::unordered_map<long long, std::vector<long long> >::iterator it = f.begin(); it != f.end(); it++){
            std::vector<long long> v = it->second;
            long long s(0); for(long long x : v){s += x;}
            mxs = (mxs > s ? mxs : s);
        }

        return mxs;
        
    }
};
