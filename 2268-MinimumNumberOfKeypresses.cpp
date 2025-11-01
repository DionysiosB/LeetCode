class Solution {
public:
    int minimumKeypresses(string s) {
        std::vector<int> f(26, 0);
        for(size_t p = 0; p < s.size(); p++){++f[s[p] - 'a'];}
        sort(f.rbegin(), f.rend());
        int cnt(0);
        for(int p = 0; p < f.size(); p++){cnt += f[p] * (1 + p / 9);}
        return cnt;
    }
};
