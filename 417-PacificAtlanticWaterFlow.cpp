class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        const int nr = heights.size();
        const int nc = heights[0].size();

        std::vector<std::vector<bool> > f(nr, std::vector<bool>(nc, 0)), g(nr, std::vector<bool>(nc, 0));

        std::deque<std::pair<int, int> > dq;
        for(int row = 0; row < nr; row++){dq.push_back(std::make_pair(row, 0)); f[row][0] = 1;}
        for(int col = 0; col < nc; col++){dq.push_back(std::make_pair(0, col)); f[0][col] = 1;}

        while(!dq.empty()){
            int row = dq.front().first;
            int col = dq.front().second;
            dq.pop_front();

            if(0 < row && heights[row - 1][col] >= heights[row][col] && !f[row - 1][col]){f[row - 1][col] = 1; dq.push_back(std::make_pair(row - 1, col));}
            if(row + 1 < nr && heights[row + 1][col] >= heights[row][col] && !f[row + 1][col]){f[row + 1][col] = 1; dq.push_back(std::make_pair(row + 1, col));}
            if(0 < col && heights[row][col - 1] >= heights[row][col] && !f[row][col - 1]){f[row][col - 1] = 1; dq.push_back(std::make_pair(row, col - 1));}
            if(col + 1 < nc && heights[row][col + 1] >= heights[row][col] && !f[row][col + 1]){f[row][col + 1] = 1; dq.push_back(std::make_pair(row, col + 1));}
        }


        for(int row = 0; row < nr; row++){dq.push_back(std::make_pair(row, nc - 1)); g[row][nc - 1] = 1;}
        for(int col = 0; col < nc; col++){dq.push_back(std::make_pair(nr - 1, col)); g[nr - 1][col] = 1;}

        while(!dq.empty()){
            int row = dq.front().first;
            int col = dq.front().second;
            dq.pop_front();

            if(0 < row && heights[row - 1][col] >= heights[row][col] && !g[row - 1][col]){g[row - 1][col] = 1; dq.push_back(std::make_pair(row - 1, col));}
            if(row + 1 < nr && heights[row + 1][col] >= heights[row][col] && !g[row + 1][col]){g[row + 1][col] = 1; dq.push_back(std::make_pair(row + 1, col));}
            if(0 < col && heights[row][col - 1] >= heights[row][col] && !g[row][col - 1]){g[row][col - 1] = 1; dq.push_back(std::make_pair(row, col - 1));}
            if(col + 1 < nc && heights[row][col + 1] >= heights[row][col] && !g[row][col + 1]){g[row][col + 1] = 1; dq.push_back(std::make_pair(row, col + 1));}
        }

        std::vector<std::vector<int> > w;
        for(int row = 0; row < nr; row++){
            for(int col = 0; col < nc; col++){
                if(f[row][col] && g[row][col]){w.push_back(std::vector<int>(2)); w.back()[0] = row; w.back()[1] = col;}
            }
        }

        return w;
    }
};
