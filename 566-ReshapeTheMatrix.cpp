class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int mr(mat.size()), mc(mat[0].size());
        if(mr * mc != r * c){return mat;}
        std::vector<std::vector<int> > g(r, std::vector<int>(c, 0));
        for(int p = 0; p < mr * mc; p++){g[p / c][p % c] = mat[p / mc][p % mc];}
        return g;
    }
};
