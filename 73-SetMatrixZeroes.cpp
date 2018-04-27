class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        std::set<int> rows;
        std::set<int> cols;
        
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                if(matrix[row][col] == 0){rows.insert(row); cols.insert(col);}
            }
        }
        
        for(int row = 0; row < matrix.size(); row++){
            for(int col = 0; col < matrix[row].size(); col++){
                if(rows.count(row) > 0 || cols.count(col) > 0){matrix[row][col] = 0;}
            }
        }
    }
};
