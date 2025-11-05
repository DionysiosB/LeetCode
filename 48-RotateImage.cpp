class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int n = matrix.size();
        for(int row = 0; row < n; row++){
            for(int col = 0; col < row; col++){
                std::swap(matrix[row][col], matrix[col][row]);
            }
        }

        for(int row = 0; row < n; row++){std::reverse(matrix[row].begin(), matrix[row].end());}
    }
};
