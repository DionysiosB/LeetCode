class Solution {
public:
    int maximumProfit(vector<int>& present, vector<int>& future, int budget) {
        //Classic Knapsack problem
        const int n = present.size();
        std::vector<std::vector<int> > f(n + 1, std::vector<int>(budget + 1, 0));

        for(int item = 1; item <= n; item++){
            int weight = present[item - 1];
            int value  = std::max(future[item - 1] - present[item - 1], 0);
            for(int b = 0; b <= budget; b++){
                f[item][b] = std::max(f[item - 1][b], weight <= b ? (f[item - 1][b - weight] + value) : 0);
            }
        }

        return f.back().back();
    }
};
