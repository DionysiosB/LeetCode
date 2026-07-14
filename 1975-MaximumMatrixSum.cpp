class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long cs(0);
        int cnt(0), mn(1e6);
        for(size_t row = 0; row < matrix.size(); row++){
            for(size_t col = 0; col < matrix[0].size(); col++){
                int x = matrix[row][col];
                if(x < 0){cnt = 1 - cnt; x = -x;}
                cs += x;
                mn = (mn < x ? mn : x);
            }
        }

        cs -= 2 * cnt * mn;
        return cs;
    }
};
