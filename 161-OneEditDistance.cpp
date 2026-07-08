class Solution {
public:
    bool isOneEditDistance(string s, string t) {

        if(s.size() > t.size() + 1 || t.size() > s.size() + 1){return false;}

        if(s.size() == t.size()){
            int cnt(0);
            for(int p = 0; p < s.size(); p++){cnt += (s[p] != t[p]);}
            return cnt == 1;
        }

        if(t.size() == s.size() + 1){std::string w = s; s = t; t = w;}
        int idx(0); bool chg(false);
        for(int p = 0; p < s.size(); p++){
            if(!chg && s[p] != t[idx]){chg = true;}
            else if(s[p] != t[idx]){return false;}
            else{++idx;}
        }

        return chg;
        
    }
};
