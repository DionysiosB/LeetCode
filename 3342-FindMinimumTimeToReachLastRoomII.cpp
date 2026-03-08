class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        const int TM = 1e9 + moveTime.size() * moveTime[0].size() + 7;
        const int nrow = moveTime.size();
        const int ncol = moveTime[0].size();

        std::vector<std::vector<int> > t(nrow, std::vector<int>(ncol, TM));
        t[0][0] = 0;
        std::deque<std::pair<int, int> > dq;
        dq.push_back(std::make_pair(0, 0));

        while(!dq.empty()){
            std::pair<int, int> cur = dq.front();
            dq.pop_front();
            int row = cur.first;
            int col = cur.second;
            int ct = t[row][col];
            if(row > 0){
                int tst = 1 + (row + col) % 2 + (ct > moveTime[row - 1][col] ? ct : moveTime[row - 1][col]);
                if(tst < t[row - 1][col]){t[row - 1][col] = tst; dq.push_back(std::make_pair(row - 1, col));}
            }
            if(row + 1 < nrow){
                int tst = 1 + (row + col) % 2 + (ct > moveTime[row + 1][col] ? ct : moveTime[row + 1][col]);
                if(tst < t[row + 1][col]){t[row + 1][col] = tst; dq.push_back(std::make_pair(row + 1, col));}
            }

            if(col > 0){
                int tst = 1 + (row + col) % 2 + (ct > moveTime[row][col - 1] ? ct : moveTime[row][col - 1]);
                if(tst < t[row][col - 1]){t[row][col - 1] = tst; dq.push_back(std::make_pair(row, col - 1));}
            }

            if(col + 1 < ncol){
                int tst = 1 + (row + col) % 2 + (ct > moveTime[row][col + 1] ? ct : moveTime[row][col + 1]);
                if(tst < t[row][col + 1]){t[row][col + 1] = tst; dq.push_back(std::make_pair(row, col + 1));}
            }

        }

        return t.back().back();
    }
};
