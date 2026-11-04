class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        const int nrow = isWater.size();
        const int ncol = isWater[0].size();

        std::vector<std::vector<int> > w(nrow, std::vector<int>(ncol, -1));

        std::deque<std::pair<int, int> > dq;
        for(int row = 0; row < nrow; row++){
            for(int col = 0; col < ncol; col++){
                if(isWater[row][col]){
                    w[row][col] = 0;
                    dq.push_back(std::make_pair(row, col));
                }
            }
        }

        while(!dq.empty()){
            std::pair<int, int> cur = dq.front();
            dq.pop_front();
            int row = cur.first;
            int col = cur.second;
            int lvl = w[row][col] + 1;
            if(row > 0 && w[row - 1][col] < 0){w[row - 1][col] = lvl; dq.push_back(std::make_pair(row - 1, col));}
            if(col > 0 && w[row][col - 1] < 0){w[row][col - 1] = lvl; dq.push_back(std::make_pair(row, col - 1));}
            if(row + 1 < nrow && w[row + 1][col] < 0){w[row + 1][col] = lvl; dq.push_back(std::make_pair(row + 1, col));}
            if(col + 1 < ncol && w[row][col + 1] < 0){w[row][col + 1] = lvl; dq.push_back(std::make_pair(row, col + 1));}
        }

        return w;
    }
};
