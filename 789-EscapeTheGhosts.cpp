class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {

        int dist = std::abs(target[0]) + std::abs(target[1]);
        for(std::vector<int> g : ghosts){
            int ghostdist = std::abs(g[0] - target[0]) + std::abs(g[1] - target[1]);
            if(ghostdist <= dist){return false;}
        }

        return true;
    }
};
