class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        for(int p = 1; p < cost.size(); p++){cost[p] = std::min(cost[p - 1], cost[p]);}
        return cost;
    }
};
