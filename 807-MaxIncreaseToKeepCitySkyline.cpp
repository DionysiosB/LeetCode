class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

        int n = grid.size();
        std::vector<int> mxr(n, 0), mxc(n, 0);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                mxr[row] = std::max(mxr[row],grid[row][col]);
                mxc[col] = std::max(mxc[col],grid[row][col]);
            }
        }

        int cnt(0);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < n; col++){
                cnt += std::min(mxr[row], mxc[col]) - grid[row][col];
            }
        }

        return cnt;
    }
};
