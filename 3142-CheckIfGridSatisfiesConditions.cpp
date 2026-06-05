class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int nr(grid.size()), nc(grid[0].size());
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                if(row + 1 < nr && grid[row + 1][col] != grid[row][col]){return false;}
                if(col + 1 < nc && grid[row][col + 1] == grid[row][col]){return false;}
            }
        }
        return true;
    }
};
