class Solution {
public:

    void dfs(std::vector<std::vector<int> > &g, int row, int col, bool &enc, int &cnt){
        if(row < 0 || row >= g.size() || col < 0 || col >= g[0].size()){enc = false; return;}
        if(g[row][col] <= 0){return;}
        ++cnt;
        g[row][col] = -1;
        dfs(g, row - 1, col, enc, cnt);
        dfs(g, row + 1, col, enc, cnt);
        dfs(g, row, col - 1, enc, cnt);
        dfs(g, row, col + 1, enc, cnt);
    }

    int numEnclaves(vector<vector<int>>& grid) {

        int total(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] <= 0){continue;}
                bool enclave(true);
                int cnt(0);
                dfs(grid, row, col, enclave, cnt);
                total += enclave * cnt;
            }
        }
        
        return total;
    }
};
