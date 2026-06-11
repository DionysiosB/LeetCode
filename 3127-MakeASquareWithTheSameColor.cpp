class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {

        for(int row = 0; row <= 1; row++){
            for(int col = 0; col <= 1; col++){
                int cs = (grid[row][col] == 'B') + (grid[row][col + 1] == 'B') +  (grid[row + 1][col] == 'B') + (grid[row + 1][col + 1] == 'B');
                if(cs >= 3 || cs <= 1){return true;}
            }
        }

        return false;
    }
};
