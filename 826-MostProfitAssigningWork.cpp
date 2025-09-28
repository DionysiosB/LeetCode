class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        const size_t n = profit.size();
        const size_t m = worker.size();

        std::vector<std::pair<int, int> > v(n);
        for(size_t p = 0; p < n; p++){v[p] = std::make_pair(profit[p], difficulty[p]);}
        sort(v.rbegin(), v.rend());
        sort(worker.rbegin(), worker.rend());

        size_t idx(0); int total(0);
        for(size_t p = 0; p < n; p++){
            int pnl  = v[p].first;
            int diff = v[p].second;
            while(idx < m && diff <= worker[idx]){total += pnl; ++idx;}
        }

        return total;
    }
};
