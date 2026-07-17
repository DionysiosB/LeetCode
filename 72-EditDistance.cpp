class Solution {
public:
    int minDistance(string word1, string word2) {

        std::vector<std::vector<int> > f(word1.size() + 1, std::vector<int>(word2.size() + 1, 0));

        for(size_t row = 0; row < f.size(); row++){f[row][0] = row;}
        for(size_t col = 0; col < f[0].size(); col++){f[0][col] = col;}

        for(size_t row = 1; row < f.size(); row++){
            for(size_t col = 1; col < f[0].size(); col++){
                f[row][col] = f[row - 1][col - 1] + (word1[row - 1] != word2[col - 1]);
                f[row][col] = std::min(f[row][col], 1 + f[row - 1][col]);
                f[row][col] = std::min(f[row][col], 1 + f[row][col - 1]);
            }
        }

        return f.back().back();
    }
};
