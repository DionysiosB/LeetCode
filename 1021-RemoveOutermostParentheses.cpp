class Solution {
public:
    string removeOuterParentheses(string s) {
        std::string ans("");
        int idx(0), cnt(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '('){if(cnt){ans += '(';}; ++cnt;}
            else if(s[p] == ')'){--cnt; if(cnt){ans += ')';}}
        }
        return ans;
    }
};
