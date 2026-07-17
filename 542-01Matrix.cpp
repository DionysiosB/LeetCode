class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        std::vector<std::vector<int> > dm(mat.size(), std::vector<int>(mat[0].size(), 1e9));
        std::deque<std::pair<int, int> > dq;

        for(size_t row = 0; row < mat.size(); row++){
            for(size_t col = 0; col < mat[0].size(); col++){
                if(mat[row][col]){continue;}
                dm[row][col] = 0;
                dq.push_back(std::make_pair(row, col));
            }
        }

        while(!dq.empty()){
            std::pair<int, int> cp = dq.front();
            dq.pop_front();
            int nr = cp.first;
            int nc = cp.second;
            int val = dm[nr][nc];

            if(nr > 0 && dm[nr - 1][nc] > 1 + val){dm[nr - 1][nc] = 1 + val; dq.push_back(std::make_pair(nr - 1, nc));}
            if(nr + 1 < dm.size() && dm[nr + 1][nc] > 1 + val){dm[nr + 1][nc] = 1 + val; dq.push_back(std::make_pair(nr + 1, nc));}
            if(nc > 0 && dm[nr][nc - 1] > 1 + val){dm[nr][nc - 1] = 1 + val; dq.push_back(std::make_pair(nr, nc - 1));}
            if(nc + 1 < dm[0].size() && dm[nr][nc + 1] > 1 + val){dm[nr][nc + 1] = 1 + val; dq.push_back(std::make_pair(nr, nc + 1));}
        }

        return dm;
    }
};
