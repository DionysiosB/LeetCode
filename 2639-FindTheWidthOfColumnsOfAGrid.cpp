class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        std::vector<int> v;
        for(int col = 0; col < grid[0].size(); col++){
            int w(0);
            for(int row = 0; row < grid.size(); row++){
                int cur(grid[row][col]);
                int cnt(0);
                if(cur < 0){cur =-cur; cnt = 1;}
                while(cur){++cnt; cur /= 10;}
                if(!cnt){cnt = 1;}
                w = (w > cnt ? w : cnt);
            }
            v.push_back(w);
        }
        
        return v;
    }
};
