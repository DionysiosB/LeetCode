class Solution {
public:
    bool checkValidString(string s) {
        int rmn(0), rmx(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '('){++rmn; ++rmx;}
            else if(s[p] == ')'){rmn = std::max(rmn - 1, 0); --rmx;}
            else if(s[p] == '*'){rmn = std::max(rmn - 1, 0); ++rmx;}
            if(rmx < 0){return false;}
        }

        return (!rmn);
    }
};
