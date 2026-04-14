class Solution {
public:
    int minSteps(string s, string t) {

        std::vector<int> v(26, 0);
        for(size_t p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        for(size_t p = 0; p < t.size(); p++){--v[t[p] - 'a'];}
        int cnt(0);
        for(int p = 0; p < v.size(); p++){cnt += std::abs(v[p]);}
        return cnt;
    }
};
