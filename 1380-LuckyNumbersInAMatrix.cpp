class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        std::set<std::pair<int, int> > s, t;

        for(int row = 0; row < matrix.size(); row++){
            int cur(1e7); std::pair<int, int> idx;
            for(int col = 0; col < matrix[0].size(); col++){
                if(matrix[row][col] < cur){cur = matrix[row][col]; idx = std::make_pair(row, col);}
            }
            s.insert(idx);
        }


        for(int col = 0; col < matrix[0].size(); col++){
            int cur(0); std::pair<int, int> idx;
            for(int row = 0; row < matrix.size(); row++){
                if(matrix[row][col] > cur){cur = matrix[row][col]; idx = std::make_pair(row, col);}
            }
            t.insert(idx);
        }

        std::vector<int> ans;
        for(std::set<std::pair<int, int> >::iterator it = s.begin(); it != s.end(); it++){
            if(t.count(*it)){ans.push_back(matrix[it->first][it->second]);}
        }

        return ans;
    }
};
