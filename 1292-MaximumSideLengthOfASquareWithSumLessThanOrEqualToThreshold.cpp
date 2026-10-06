class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {

        const int n = mat.size();
        const int m = mat[0].size();

        //Everything is shifted by one to avoid checking for negative indices;
        std::vector<std::vector<int> > f(n + 1, std::vector<int>(m + 1, 0));

        int mxs(0);
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                f[row + 1][col + 1] = f[row + 1][col] + f[row][col + 1] - f[row][col] + mat[row][col];
                if(row < mxs || col < mxs){continue;}
                int cur = f[row + 1][col + 1] - f[row - mxs][col + 1] - f[row + 1][col - mxs] + f[row - mxs][col - mxs];
                if(cur <= threshold){++mxs;}
            }
        }

        return mxs;
    }
};
