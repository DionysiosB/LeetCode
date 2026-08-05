class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {

        const int nr = grid.size();
        const int nc = grid[0].size();

        int startcol(nc - 1), step(-1);
        bool skip(false);
        std::vector<int> v;a
        for(int row = 0; row < nr; row++){
            step = -step; startcol = nc - 1 - startcol;
            for(int col = startcol; col >= 0 && col < nc; col += step){
                if(!skip){v.push_back(grid[row][col]);}
                skip = !skip;
            }
        }

        return v;
    }
};
