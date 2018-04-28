class Solution {
public:
    long long uniquePaths(int m, int n) {
        
        std::vector<std::vector<long long> > a(m, std::vector<long long>(n, 0));
        a[0][0] = 1;
        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                if(row > 0){a[row][col] += a[row - 1][col];}
                if(col > 0){a[row][col] += a[row][col - 1];}
            }
        }
        
        return a[m - 1][n - 1];
    }
};
