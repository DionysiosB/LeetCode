class Solution {
public:
    int minimumPushes(string word) {
        
        std::vector<int> f(26);
        for(int p = 0; p < word.size(); p++){++f[word[p] - 'a'];}
        sort(f.rbegin(), f.rend());
        int cnt(0);
        for(int p = 0; p < f.size(); p++){cnt += f[p] * (1 + (p / 8));}
        return cnt;
    }
};
