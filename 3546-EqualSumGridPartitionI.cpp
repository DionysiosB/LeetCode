class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {

        const int nrow = grid.size();
        const int ncol = grid[0].size();
        std::vector<long long> srow(nrow, 0);
        std::vector<long long> scol(ncol, 0);

        for(int row = 0; row < nrow; row++){
            for(int col = 0; col < ncol; col++){
                srow[row] += grid[row][col];
                scol[col] += grid[row][col];
            }
        }

        for(int p = 1; p < nrow; p++){srow[p] += srow[p - 1];}
        for(int p = 0; p < nrow; p++){if(2 * srow[p] == srow.back()){return true;}}

        for(int p = 1; p < ncol; p++){scol[p] += scol[p - 1];}
        for(int p = 0; p < ncol; p++){if(2 * scol[p] == scol.back()){return true;}}

        return false;
    }
};
