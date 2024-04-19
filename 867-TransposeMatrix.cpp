class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        const int nrow = matrix[0].size();
        const int ncol = matrix.size();

        std::vector<std::vector<int> > res(nrow, std::vector<int>(ncol, 0));

        for(int row = 0; row < nrow; row++){
            for(int col = 0; col < ncol; col++){
                res[row][col] = matrix[col][row];
            }
        }

        return res;
    }
};
