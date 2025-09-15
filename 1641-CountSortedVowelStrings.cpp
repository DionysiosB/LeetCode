class Solution {
public:
    int countVowelStrings(int n) {
        std::vector<std::vector<int> > f(n, std::vector<int>(5, 0));
        for(int col = 0; col < 5; col++){f[0][col] = col + 1;}
        for(int row = 0; row < n; row++){f[row][0] = 1;}
        for(int row = 1; row < n; row++){
            for(int col = 1; col < 5; col++){
                f[row][col] = f[row][col - 1] + f[row - 1][col];
            }
        }

        return f.back().back();
    }
};
