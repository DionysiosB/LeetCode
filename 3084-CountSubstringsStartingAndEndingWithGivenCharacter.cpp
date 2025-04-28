class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long prev(1), cnt(0);
        for(int p = 0; p < s.size(); p++){if(s[p] == c){cnt += prev++;}}
        return cnt;
    }
};
