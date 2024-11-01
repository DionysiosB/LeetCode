class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt(0);
        for(int row = grid.size() - 1; row >= 0; row--){
            for(int col = grid[0].size() - 1; col >= 0; col--){
                if(grid[row][col] < 0){++cnt;}
                else{break;}
            }
        }

        return cnt;
    }
};
