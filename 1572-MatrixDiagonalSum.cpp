class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int total(0);
        for(int p = 0; p < n; p++){total += mat[p][p];}
        for(int p = 0; p < n; p++){total += mat[p][n - 1 - p];}
        if(n % 2){int m = n / 2; total -= mat[m][m];}
        return total;
    }
};
