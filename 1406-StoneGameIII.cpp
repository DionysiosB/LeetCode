class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {

        const int n = stoneValue.size();
        std::vector<int> f(n + 1, -1e9);
        f.back() = 0;

        for(int p = n - 1; p >= 0; p--){
            int sum(0);
            for(int q = p; q < p + 3 && q < n; q++){
                sum += stoneValue[q];
                f[p] = std::max(f[p], sum - f[q + 1]);
            }
        }

        return f[0] > 0 ? "Alice" : f[0] < 0 ? "Bob" : "Tie";   
    }
};
