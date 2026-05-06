class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {

        int nr(grid.size()), nc(grid[0].size());
        std::vector<int> mr(nr), mc(nc);
        int cnt(0);
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                cnt += (grid[row][col] > 0);
                mr[row] = std::max(mr[row], grid[row][col]);
                mc[col] = std::max(mc[col], grid[row][col]);
            }
        }
        
        for(int row = 0; row < nr; row++){cnt += mr[row];}
        for(int col = 0; col < nc; col++){cnt += mc[col];}
        return cnt;
    }
};
