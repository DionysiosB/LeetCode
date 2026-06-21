class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        const int nrow = grid.size();
        const int ncol = grid[0].size();
        std::vector<std::vector<int> > v(nrow, std::vector<int>(ncol, 0));
        v[0][0] = grid[0][0];
        for(int row = 0; row < nrow; row++){
            for(int col = 0; col < ncol; col++){
                if(row == 0 && col == 0){continue;}
                int cs(1e9);
                if(row){cs = std::min(cs, v[row - 1][col]);}
                if(col){cs = std::min(cs, v[row][col - 1]);}
                v[row][col] = grid[row][col] + cs;
            }
        }

        return v.back().back();
    }
};
