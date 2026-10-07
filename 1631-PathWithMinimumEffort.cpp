class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        const int nrow = heights.size();
        const int ncol = heights[0].size();
        std::vector<std::vector<int> > mf(nrow, std::vector<int>(ncol, 1e9));
        mf[0][0] = 0;

        std::deque<std::pair<int, int> > dq;
        dq.push_back(std::make_pair(0, 0));

        while(!dq.empty()){
            int row = dq.front().first;
            int col = dq.front().second;
            dq.pop_front();

            int tst(mf[row][col]);
            if(row > 0){
                int tst = std::max(mf[row][col], std::abs(heights[row][col] - heights[row - 1][col]));
                if(tst < mf[row - 1][col]){mf[row - 1][col] = tst; dq.push_back(std::make_pair(row - 1, col));}
            }

            if(row + 1 < nrow){
                int tst = std::max(mf[row][col], std::abs(heights[row][col] - heights[row + 1][col]));
                if(tst < mf[row + 1][col]){mf[row + 1][col] = tst; dq.push_back(std::make_pair(row + 1, col));}
            }

            if(col > 0){
                int tst = std::max(mf[row][col], std::abs(heights[row][col] - heights[row][col - 1]));
                if(tst < mf[row][col - 1]){mf[row][col - 1] = tst; dq.push_back(std::make_pair(row, col - 1));}
            }

            if(col + 1 < ncol){
                int tst = std::max(mf[row][col], std::abs(heights[row][col] - heights[row][col + 1]));
                if(tst < mf[row][col + 1]){mf[row][col + 1] = tst; dq.push_back(std::make_pair(row, col + 1));}
            }
        }

        return mf.back().back();
    }


};
