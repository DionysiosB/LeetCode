class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        std::map<char, char> m;
        std::map<char, char> n;
        if(s.size() != t.size()){return false;}
        for(size_t p = 0; p < s.size(); p++){
            if((m.count(s[p]) <= 0) && (n.count(t[p]) <= 0)){m[s[p]] = t[p]; n[t[p]] = s[p]; continue;}
            if((m[s[p]] != t[p]) || (n[t[p]] != s[p])){return false;}
        }
        return true;
    }
};
