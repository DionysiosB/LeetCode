class Solution {
public:
    string reverseWords(std::string s) {
        
        std::string t("");
        long start = 0;
        for(long p = 0; p < s.size(); p++){
            if(s[p] == ' '){
                for(int q = p - 1; q >= start; q--){t = t + s[q];}
                start = p + 1;
                t = t + " ";
            }
        }
        
        for(int q = s.size() - 1; q >= start; q--){t = t + s[q];}
        return t;
    }
};
