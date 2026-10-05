class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int v[3] = {0};
        for (int stone: stones){++v[stone % 3];}
        if(!std::min(v[1], v[2])){return std::max(v[1], v[2]) > 2 && v[0] % 2 > 0;}
        return std::abs(v[1] - v[2]) > 2 || v[0] % 2 == 0;     
    }
};
