class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int mnr(grid.size()), mxr(-1), mnc(grid[0].size()), mxc(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(!grid[row][col]){continue;}
                mnr = std::min(mnr, row);
                mxr = std::max(mxr, row);
                mnc = std::min(mnc, col);
                mxc = std::max(mxc, col);
            }
        }

        return (mxr - mnr + 1) * (mxc - mnc + 1);
    }
};
