class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        std::string t("");
        for(int p = 0; p < words.size(); p++){
            t += words[p];
            if(t.size() >= s.size()){break;}
        }
        
        if(s.size() != t.size()){return false;}
        
        for(int p = 0; p < s.size(); p++){
            if(s[p] != t[p]){return false;}
        }
        
        return true;
    }
};
