class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {

        const int nr(grid.size()), nc(grid[0].size());
        int cntr(0);
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc - 1 - col; col++){
                cntr += (grid[row][col] != grid[row][nc - 1 - col]);
            }
        }

        int cntc(0);
        for(int row = 0; row < nr - 1 - row; row++){
            for(int col = 0; col < nc; col++){
                cntc += (grid[row][col] != grid[nr - 1 - row][col]);
            }
        }
        
        return (cntr < cntc ? cntr : cntc);
    }
};
