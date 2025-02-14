class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        
        int cnt(2 * grid.size() * grid[0].size());
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(!grid[row][col]){cnt -= 2; continue;}
                int diffA = grid[row][col] - (row > 0 ? grid[row - 1][col] : 0);
                int diffB = grid[row][col] - (row + 1 < grid.size() ? grid[row + 1][col] : 0);
                int diffC = grid[row][col] - (col > 0 ? grid[row][col - 1] : 0);
                int diffD = grid[row][col] - (col + 1 < grid[row].size() ? grid[row][col + 1] : 0);
                cnt += diffA * (diffA > 0) + diffB * (diffB > 0) + diffC * (diffC > 0) + diffD * (diffD > 0);
            }
        }
        
        return cnt;
    }
};
