class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        const int n = cost.size();
        std::vector<int> f(n, 0);
        f[0] = cost[0]; f[1] = cost[1];
        for(int p = 2; p < n; p++){
            f[p] = cost[p] + (f[p - 1] < f[p - 2] ? f[p - 1] : f[p - 2]);
        }

        return (f[n - 1] < f[n - 2] ? f[n - 1] : f[n - 2]);
    }
};
