class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int row = 0; row < grid.size(); row++){
            sort(grid[row].rbegin(), grid[row].rend());
        }

        int total(0);
        for(int col = 0; col < grid[0].size(); col++){
            int cur(0);
            for(int row = 0; row < grid.size(); row++){cur = (cur > grid[row][col] ? cur : grid[row][col]);}
            total += cur;
        }

        return total;
    }
};
