class Solution {
public:
    int countGoodSubstrings(string s) {

        int cnt(0);
        for(size_t p = 2; p < s.size(); p++){
            cnt += (s[p - 2] != s[p] && s[p - 2] != s[p - 1] && s[p - 1] != s[p]);
        }
        return cnt;
    }
};
