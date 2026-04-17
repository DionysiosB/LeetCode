class NeighborSum {
public:
    NeighborSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid.size(); col++){
                int x = grid[row][col];
                adjc[x] = 0; diag[x] = 0;
                if(row > 0){adjc[x] += grid[row - 1][col];}
                if(row + 1 < n){adjc[x] += grid[row + 1][col];}
                if(col > 0){adjc[x] += grid[row][col - 1];}
                if(col + 1 < n){adjc[x] += grid[row][col + 1];}

                if(row > 0 && col > 0){diag[x] += grid[row - 1][col - 1];}
                if(row > 0 && col + 1 < n){diag[x] += grid[row - 1][col + 1];}
                if(row + 1 < n && col > 0){diag[x] += grid[row + 1][col - 1];}
                if(row + 1 < n && col + 1 < n){diag[x] += grid[row + 1][col + 1];}

            }
        }


    }
    
    int adjacentSum(int value){return adjc[value];}
    int diagonalSum(int value){return diag[value];}

private:
    std::map<int, int> adjc, diag;
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
