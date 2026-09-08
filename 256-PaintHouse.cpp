class Solution {
public:
    int minCost(vector<vector<int>>& costs) {

        std::vector<std::vector<int> > v(costs.size(), std::vector<int>(3, 1e7));
        v[0] = costs[0];
        for(int p = 1; p < v.size(); p++){
            for(int q = 0; q < 3; q++){
                v[p][q] = costs[p][q] + std::min(v[p - 1][(q + 1) % 3] , v[p - 1][(q + 2) % 3]);
            }
        }

        return std::min(v.back()[0], std::min(v.back()[1], v.back()[2]));
    }
};
