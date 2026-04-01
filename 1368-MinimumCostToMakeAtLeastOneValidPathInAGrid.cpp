class Solution {
public:
    int minCost(vector<vector<int>>& grid) {

        const int nrow = grid.size();
        const int ncol = grid[0].size();
        std::vector<std::vector<int> > v(nrow, std::vector<int>(ncol, 1e9));

        v[0][0] = 0;
        std::queue<std::pair<int, int> > q; q.push(std::make_pair(0, 0));
        while(!q.empty()){
            std::pair<int, int> cn = q.front();
            q.pop();
            int row = cn.first;
            int col = cn.second;
            int cost = v[row][col];
            int dir = grid[row][col];
            if(col + 1 < ncol){
                int tst = cost + (dir != 1);
                if(tst < v[row][col + 1]){v[row][col + 1] = tst; q.push(std::make_pair(row, col + 1));}
            }
            if(col > 0){
                int tst = cost + (dir != 2);
                if(tst < v[row][col - 1]){v[row][col - 1] = tst; q.push(std::make_pair(row, col - 1));}
            }
            if(row + 1 < nrow){
                int tst = cost + (dir != 3);
                if(tst < v[row + 1][col]){v[row + 1][col] = tst; q.push(std::make_pair(row + 1, col));}
            }
            if(row > 0){
                int tst = cost + (dir != 4);
                if(tst < v[row - 1][col]){v[row - 1][col] = tst; q.push(std::make_pair(row - 1, col));}
            }

        }




        return v[nrow - 1][ncol - 1];
    }
};
