class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        std::map<int, std::vector<int> > mv;
        for(int row = 0; row < mat.size(); row++){
            for(int col = 0; col < mat[0].size(); col++){
                mv[row - col].push_back(mat[row][col]);
            }
        }

        for(std::map<int, std::vector<int>>::iterator it = mv.begin(); it != mv.end(); it++){
            sort(it->second.rbegin(), it->second.rend());
        }

        for(int row = 0; row < mat.size(); row++){
            for(int col = 0; col < mat[0].size(); col++){
                mat[row][col] = mv[row - col].back();
                mv[row - col].pop_back();
            }
        }

        return mat;
    }
};
