class Solution {
public:
    int maxJump(vector<int>& stones) {
        int res(stones[1] - stones[0]); //in case the length is 2;
        for(int p = 2; p < stones.size(); p++){res = std::max(res, stones[p] - stones[p - 2]);}
        for(int p = 3; p < stones.size(); p++){res = std::max(res, stones[p] - stones[p - 2]);}
        return res;
    }
};
