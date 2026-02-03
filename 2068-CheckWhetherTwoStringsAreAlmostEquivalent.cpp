class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        std::vector<long> f(26, 0);
        for(long p = 0; p < word1.size(); p++){++f[word1[p] - 'a'];}
        for(long p = 0; p < word2.size(); p++){--f[word2[p] - 'a'];}
        for(long p = 0; p < f.size(); p++){
            if(f[p] < -3 || f[p] > 3){return false;}
        }

        return true;
    }
};
