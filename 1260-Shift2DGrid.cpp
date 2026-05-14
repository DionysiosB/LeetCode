class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int nr(grid.size()), nc(grid[0].size());
        std::vector<std::vector<int> > m(grid);
        for(int p = 0; p < nr * nc; p++){
            int prow(p / nc), pcol(p % nc);
            int nrow( ((p + k) % (nr * nc)) / nc), ncol( ((p + k) % (nr * nc)) % nc);
            m[nrow][ncol] = grid[prow][pcol];
        }
        return m;
    }
};
