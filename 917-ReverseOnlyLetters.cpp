class Solution {
public:
    string reverseOnlyLetters(string s) {
        std::vector<char> v;
        for(int p = 0; p < s.size(); p++){
            if('a' <= s[p] && s[p] <= 'z'){v.push_back(s[p]);}
            else if('A' <= s[p] && s[p] <= 'Z'){v.push_back(s[p]);}
        }
        
        std::reverse(v.begin(), v.end());
        int idx(0);
        for(int p = 0; p < s.size(); p++){
            if('a' <= s[p] && s[p] <= 'z'){s[p] = v[idx++];}
            else if('A' <= s[p] && s[p] <= 'Z'){s[p] = v[idx++];}
        }
        
        return s;
    }
};
