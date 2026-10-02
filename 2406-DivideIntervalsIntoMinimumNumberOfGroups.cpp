class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {

        const int B = 1e6 + 7;
        std::vector<int> v(B, 0);
        for(int p = 0; p < intervals.size(); p++){
            ++v[intervals[p][0]]; --v[intervals[p][1] + 1];
        }

        int res(0);
        for(int p = 1; p < B; p++){v[p] += v[p - 1]; res = std::max(res, v[p]);}
        return res;
    }
};
