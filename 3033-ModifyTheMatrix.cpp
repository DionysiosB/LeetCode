class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {

        std::vector<int> v(matrix[0].size(), 0);
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                v[col] = std::max(v[col], matrix[row][col]);
            }
        }
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                if(matrix[row][col] < 0){matrix[row][col] = v[col];}
            }
        }

        return matrix;
    }
};
