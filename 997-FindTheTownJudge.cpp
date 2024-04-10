class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        std::vector<long> from(n + 1, 0), to(n + 1, 0);
        for(long p = 0; p < trust.size(); p++){
            ++from[trust[p][0]];
            ++to[trust[p][1]];
        }

        for(long p = 1; p <= n; p++){
            if(from[p] == 0 && to[p] == n - 1){return p;}
        }

        return -1;
    }
};
