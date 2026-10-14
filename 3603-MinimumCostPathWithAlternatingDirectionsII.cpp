class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {

        std::vector<std::vector<long long> > w(m, std::vector<long long>(n, 0));
        for(int row = 0; row < m; row++){for(int col = 0; col < n; col++){w[row][col] = waitCost[row][col];}}

        w[0][0] = w[m - 1][n - 1] = 0;
        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                long long prev(0);
                if(row){prev = w[row - 1][col];}
                if(col){prev = w[row][col - 1];}
                if(row && col){prev = std::min(w[row - 1][col], w[row][col - 1]);}
                w[row][col] += prev + (row + 1) * (col + 1);
            }
        }
        
        return w.back().back();
    }
};
