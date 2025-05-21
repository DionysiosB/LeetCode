class Solution {
public:

    void dfs(std::vector<std::vector<char>>& grid, int row, int col){
        if(row < 0 || row >= grid.size()){return;}
        if(col < 0 || col >= grid[0].size()){return;}
        if(grid[row][col] != '1'){return;}
        grid[row][col] = 'x';
        dfs(grid, row - 1, col);
        dfs(grid, row + 1, col);
        dfs(grid, row, col - 1);
        dfs(grid, row, col + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int nr = grid.size();
        int nc = grid[0].size();
        int cnt(0);

        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                if(grid[row][col] == '1'){
                    ++cnt;
                    dfs(grid, row, col);
                }
            }
        }

        return cnt;
    }
};
