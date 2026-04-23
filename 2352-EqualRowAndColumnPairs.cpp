class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        const int n(grid.size());
        int cnt(0);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                bool equal(true);
                for(int p = 0; equal && p < n; p++){
                    if(grid[row][p] != grid[p][col]){equal = false;}
                }
                cnt += equal;
            }
        }

        return cnt;
    }
};
