class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        const int n = costs.size();
        std::vector<std::pair<int, std::vector<int> > > v(n);
        for(int p = 0; p < n; p++){v[p].second = costs[p]; v[p].first = costs[p][0] - costs[p][1];}
        sort(v.begin(), v.end());
        int total(0);
        for(int p = 0; p < n; p++){total += (2 * p < n ? v[p].second[0] : v[p].second[1]);}
        return total;
    }
};
