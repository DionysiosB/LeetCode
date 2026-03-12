class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        const int MOD = 1e9 + 7;

        sort(ranges.begin(), ranges.end());

        int stop(-1), cnt(0);
        for(int p = 0; p < ranges.size(); p++){
            if(stop < ranges[p][0]){++cnt; stop = ranges[p][1];}
            else{stop = std::max(stop, ranges[p][1]);}
        }

        long total(1);
        while(cnt--){total *= 2; total %= MOD;}
        return total;
    }
};
