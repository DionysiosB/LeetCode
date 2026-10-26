class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {

        std::vector<int> v(n + 1, 0);
        for(int p = 1; p <= n; p++){
            int a = (p >= 1 ? (v[p - 1] + 1) : 2e9);
            int b = (p >= 2 ? (v[p - 2] + 4) : 2e9);
            int c = (p >= 3 ? (v[p - 3] + 9) : 2e9);
            v[p] = costs[p - 1] + std::min(a, std::min(b, c));
        }

        return v.back();
    }
};
