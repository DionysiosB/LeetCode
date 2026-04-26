class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {

        int nr(mat.size()), nc(mat[0].size());
        std::vector<std::vector<int> > w(nr, std::vector<int>(nc, 0));

        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                w[row][col] = mat[row][col] + getCumSum(w, row - 1, col) + getCumSum(w, row, col - 1) - getCumSum(w, row - 1, col - 1);
            }
        }

        
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                mat[row][col] = getCumSum(w, row + k, col + k) - getCumSum(w, row + k, col - k - 1) - getCumSum(w, row - k - 1, col + k) + getCumSum(w, row - k - 1, col - k - 1);
            }
        }

        return mat;
    }

private:
    int getCumSum(const std::vector<std::vector<int> > &g, int row, int col){
        if(row < 0 || col < 0){return 0;}
        if(row >= g.size()){row = g.size() - 1;}
        if(col >= g[0].size()){col = g[0].size() - 1;}
        return g[row][col];
    }

};
