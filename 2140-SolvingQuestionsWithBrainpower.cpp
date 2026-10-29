class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {

        const int n = questions.size();
        std::vector<long long> f(n, 0);
        for(int p = n - 1; p >= 0; p--){
            int points = questions[p][0];
            int bp = questions[p][1];

            long long take = points + (p + bp + 1 < n ? f[p + bp + 1] : 0);
            long long skip = (p + 1 < n ? f[p + 1] : 0);
            f[p] = std::max(take, skip);
        }

        return f[0];   
    }
};
