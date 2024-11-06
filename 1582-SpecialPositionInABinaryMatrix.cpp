class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        std::vector<int> sr(mat.size()), sc(mat[0].size());
        for(int row = 0; row < mat.size(); row++){
            for(int col = 0; col < mat[0].size(); col++){
                sr[row] += mat[row][col]; sc[col] += mat[row][col];
            }
        }

        int cnt(0);
        for(int row = 0; row < mat.size(); row++){
            for(int col = 0; col < mat[0].size(); col++){
                cnt += (mat[row][col] && sr[row] == 1 && sc[col] == 1);
            }
        }

        return cnt;
    }
};
