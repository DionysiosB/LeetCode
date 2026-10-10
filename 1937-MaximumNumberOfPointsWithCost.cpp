class Solution {
public:
long long maxPoints(vector<vector<int>>& P) {
        const int nrow = P.size();
        const int ncol = P[0].size();
        
        vector<long long> f(ncol);
        for (int col = 0; col < ncol; col++){f[col] = P[0][col];}
        for (int row = 0; row < nrow - 1; row++){
            vector<long long> vleft(ncol, 0), vright(ncol, 0), g(ncol, 0);
            vleft[0] = f[0];
            for (int col = 1; col < ncol; col++){vleft[col] = max(vleft[col - 1] - 1, f[col]);}
            
            vright[ncol - 1] = f[ncol - 1];
            for (int col = ncol - 2; col >= 0; col--){vright[col] = max(vright[col + 1] - 1, f[col]);}

            for (int col = 0; col < ncol; col++){g[col] = P[row + 1][col] + max(vleft[col], vright[col]);}
            f = g;
        }

        long long ans(0);
        for (int p = 0; p < ncol; p++){ans = max(ans, f[p]);}
        return ans;
    }
};
