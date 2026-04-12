class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int nr = grid.size();
        int nc = grid[0].size();
        std::vector<int> vr(nr, 0), vc(nc, 0);

        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                if(!grid[row][col]){continue;}
                ++vr[row]; ++vc[col];
            }
        }

        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                grid[row][col] = 2 * vr[row] - nr + 2 * vc[col] - nc;
            }
        }

        return grid;
    }
};
