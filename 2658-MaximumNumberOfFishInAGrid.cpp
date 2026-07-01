class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {

        int mxcnt(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] <= 0){continue;}
                int cnt = dfs(row, col, grid);
                mxcnt = std::max(mxcnt, cnt);
            }
        }

        return mxcnt;

    }

    int dfs(int r, int c, std::vector<std::vector<int> > &grid){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] <= 0){return 0;}

        int cur = grid[r][c];
        grid[r][c] = -1;

        int total = cur + dfs(r - 1, c, grid) + dfs(r + 1, c, grid) + dfs(r, c - 1, grid) + dfs(r, c + 1, grid); 
        return total;
    }


};
