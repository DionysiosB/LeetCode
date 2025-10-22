class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int row = 1; row < triangle.size(); row++){
            for(int col = 0; col < triangle[row].size(); col++){
                int a = (col > 0) ? triangle[row - 1][col - 1] : 1e8;
                int b = (col < triangle[row - 1].size()) ? triangle[row - 1][col] : 1e8;
                int prev = (a < b ? a : b);
                triangle[row][col] += prev;
            }
        }

        int res(1e8);
        for(int p = 0; p < triangle.back().size(); p++){res = (res < triangle.back()[p] ? res : triangle.back()[p]);}
        return res;
    }
};
