class Solution {
public:
    int minChanges(string s) {
        int cnt(0), cs(1);
        for(int p = 1; p < s.size(); p++){
            if(cs && s[p - 1] != s[p]){s[p] = s[p - 1]; ++cnt;}
            cs = 1 - cs;
        }
        return cnt;
    }
};
