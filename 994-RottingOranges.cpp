class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        std::vector<std::pair<int, int> > v;
        int rem(0), t(0);
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] == 0){continue;}
                else if(grid[row][col] == 1){++rem;}
                else{grid[row][col] = 0; v.push_back(std::make_pair(row, col)); t = -1;}
            }
        }

        while(!v.empty()){
            std::vector<std::pair<int, int> > w;
            for(int p = 0; p < v.size(); p++){
                int row = v[p].first;
                int col = v[p].second;
                if(row > 0 && grid[row - 1][col] == 1){--rem; grid[row - 1][col] = 0; w.push_back(std::make_pair(row - 1, col));}
                if(row + 1 < grid.size() && grid[row + 1][col] == 1){--rem; grid[row + 1][col] = 0; w.push_back(std::make_pair(row + 1, col));}
                if(col > 0 && grid[row][col - 1] == 1){--rem; grid[row][col - 1] = 0; w.push_back(std::make_pair(row, col - 1));}
                if(col + 1 < grid[row].size() && grid[row][col + 1] == 1){--rem; grid[row][col + 1] = 0; w.push_back(std::make_pair(row, col + 1));}
            }

            v = w;
            ++t;
        }

        return rem ? -1 : t;
    }
};
