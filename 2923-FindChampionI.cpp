class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        
        for(int row = 0; row < grid.size(); row++){
            bool chmp(1);
            for(int col = 0; col < grid[row].size(); col++){
                if(col == row){continue;}
                if(!grid[row][col]){chmp = false; break;}
            }
            if(chmp){return row;}
        }
        
        return -1;
    }
};
