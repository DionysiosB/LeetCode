class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {

        std::vector<std::vector<int> > m(rowSum.size(), std::vector<int>(colSum.size(), 0));
        for(int row = 0; row < m.size(); row++){
            for(int col = 0; col < m[0].size(); col++){
                int cmn = std::min(rowSum[row], colSum[col]);
                m[row][col] = cmn;
                rowSum[row] -= cmn;
                colSum[col] -= cmn;
            }
        }

        return m;
    }
};
