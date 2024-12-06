class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        std::vector<int> res(2, 0);
        for(int row = 0; row < mat.size(); row++){
            int cur(0);
            for(int col = 0; col < mat[0].size(); col++){cur += mat[row][col];}
            if(cur > res[1]){res[0] = row; res[1] = cur;}
        }

        return res;
    }
};
