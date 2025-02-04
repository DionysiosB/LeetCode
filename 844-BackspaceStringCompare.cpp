class Solution {
public:
    bool backspaceCompare(string s, string t) {
        std::string a("");
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '#' && !a.empty()){a.pop_back();}
            else if(s[p] != '#'){a += s[p];}
        }
        
        std::string b("");
        for(int p = 0; p < t.size(); p++){
            if(t[p] == '#' && !b.empty()){b.pop_back();}
            else if(t[p] != '#'){b += t[p];}
        }
        
        return a == b;
    }
};
