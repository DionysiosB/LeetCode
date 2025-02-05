class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int row = 0; row + 1 < matrix.size(); row++){
            for(int col = 0; col + 1< matrix[0].size(); col++){
                if(matrix[row][col] != matrix[row + 1][col + 1]){return false;}
            }
        }
        
        return true;
    }
};
