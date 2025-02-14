class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[row].size(); col++){
                if(row == col || row + col + 1 == grid.size()){
                    if(!grid[row][col]){return false;}
                }
                else if(grid[row][col]){return false;}
            }
        }
        
        return true;
    }
};
