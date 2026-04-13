class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int ans(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[row].size(); col++){
                if(grid[row][col] <= 0){continue;}
                int cur = dfs(row, col, grid);
                ans = (ans > cur ? ans : cur);
            }
        }

        return ans;
        
    }

private:
    int dfs(int row, int col, std::vector<std::vector<int> > &g){
        if(row < 0 || row >= g.size()){return 0;}
        if(col < 0 || col >= g[row].size()){return 0;}
        if(g[row][col] <= 0){return 0;}
        g[row][col] = -1;
        return 1 + dfs(row - 1, col, g) + dfs(row + 1, col, g) + dfs(row, col - 1, g) + dfs(row, col + 1, g);
    }

};
