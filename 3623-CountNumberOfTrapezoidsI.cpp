class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int MOD = 1000000007;
        unordered_map<int, long long> ycnt;
        for (auto& point : points){ycnt[point[1]]++;}
        long long res(0), total(0);
        for (auto& cy : ycnt){
            long long lines = cy.second * (cy.second - 1) / 2;
            res = (res + total * lines) % MOD;
            total = (total + lines) % MOD;
        }
        return (int)res;
    }
};
