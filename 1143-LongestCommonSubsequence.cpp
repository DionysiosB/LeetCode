class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

        size_t n = text1.size();
        size_t m = text2.size();
        std::vector<std::vector<int> > f(n, std::vector<int>(m, 0));

        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                int fromup   = (row > 0 ? f[row - 1][col] : 0);
                int fromleft = (col > 0 ? f[row][col - 1] : 0);
                int fromdiag = (row > 0 && col > 0 ? f[row - 1][col - 1] : 0);

                if(text1[row] == text2[col]){f[row][col] = fromdiag + 1;}
                else{f[row][col] = std::max(fromup, fromleft);}
            }
        }

        return f.back().back();
    }
};
