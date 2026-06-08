class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {

        int nr(mat.size()), nc(mat[0].size());
        k %= nc;
        for(int row = 0; row < nr; row++){
            bool same(true);
            int cs(row % 2 ? k : -k);
            for(int col = 0; col < nc; col++){
                if(mat[row][(col + cs + nc) % nc] != mat[row][col]){return false;}
            }
        }
        return true;
    }
};
