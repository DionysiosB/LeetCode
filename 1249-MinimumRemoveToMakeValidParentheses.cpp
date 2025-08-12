class Solution {
public:
    string minRemoveToMakeValid(string s) {
        std::vector<bool> v(s.size(), 1);
        int cnt(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '('){++cnt;}
            else if(s[p] == ')'){
                if(cnt > 0){--cnt;}
                else{v[p] = 0;}
            }
        }

        for(int p = s.size() - 1; p >= 0 && cnt > 0; p--){
            if(s[p] == '('){v[p] = 0; --cnt;}
        }

        std::string ans("");
        for(int p = 0; p < s.size(); p++){if(v[p]){ans += s[p];}}
        return ans;
    }
};
