class Solution {
public:
    int longestCommonPrefix(string s, string t) {

        int cnt(0);
        bool rem(true);
        size_t idx(0);
        for(size_t p = 0; p < s.size(); p++){
            if(idx < t.size() && s[p] == t[idx]){++idx; ++cnt;;}
            else if(idx >= t.size()){return cnt;}
            else if(rem){rem = false;}
            else{return cnt;}
        }

        return cnt;
    }
};
