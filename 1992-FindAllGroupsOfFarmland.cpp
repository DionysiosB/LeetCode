class Solution {
public:

    void dfs(std::vector<std::vector<int> > &land, int row, int col, int &stopRow, int &stopCol){
        if(row >= land.size() || col >= land[0].size() || !land[row][col]){return;}
        land[row][col] = 0;
        stopRow = (stopRow > row ? stopRow : row);
        stopCol = (stopCol > col ? stopCol : col);
        dfs(land, row + 1, col, stopRow, stopCol);
        dfs(land, row, col + 1, stopRow, stopCol);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        std::vector<std::vector<int> > v;
        for(int row = 0; row < land.size(); row++){
            for(int col = 0; col < land[0].size(); col++){
                if(!land[row][col]){continue;}
                int endRow(-1), endCol(-1);
                dfs(land, row, col, endRow, endCol);
                std::vector<int> w({row, col, endRow,endCol});
                v.push_back(w);
            }
        }

        return v;
    }
};
