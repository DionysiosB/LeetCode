class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        for(int col = y; col < y + k; col++){
            for(int row = 0; 2 * row < k; row++){
                std::swap(grid[x + row][col], grid[x + k - 1 - row][col]);
            }
        }

        return grid;
    }
};
