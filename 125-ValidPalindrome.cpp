class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string t;
        for(int p = 0; p < s.size(); p++){
            if(!isalnum(s[p])){continue;}
            t += tolower(s[p]);
        }

        for(int p = 0; p < t.size() / 2; p++){
            if(t[p] != t[t.size() - 1 - p]){return false;}
        }

        return true;
    }
};
