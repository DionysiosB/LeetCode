class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {

        int res(0);
        for(int row = 0; row + 2 < grid.size(); row++){
            for(int col = 0; col + 2 < grid[row].size(); col++){
                int cur = grid[row][col] + grid[row][col + 1] + grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] + grid[row + 2][col + 1] + grid[row + 2][col + 2];
                res = (res > cur ? res : cur);
            }
        }

        return res;
    }
};
