class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        
        int total(0);
        for(int col = 0; col < grid[0].size(); col++){
            for(int row = 1; row < grid.size(); row++){
                int diff = grid[row - 1][col] - grid[row][col];
                if(diff < 0){continue;}
                else{total += 1 + diff; grid[row][col] = 1 + grid[row - 1][col];}    
            }
        }

        return total;
    }
};
