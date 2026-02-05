class Solution {
public:
    string modifyString(string s) {
        if(s == "?"){return "a";}
        if(s[0] == '?'){s[0] = (s[1] != 'a') ? 'a' : 'b';}
        if(s.back() == '?'){s.back() = (s[s.size() - 2] != 'a') ? 'a' : 'b';}

        for(long p = 1; p + 1 < s.size(); p++){
            if(s[p] != '?'){continue;}
            if(s[p - 1] != 'a' && s[p + 1] != 'a'){s[p] = 'a';}
            else if(s[p - 1] != 'b' && s[p + 1] != 'b'){s[p] = 'b';}
            else{s[p] = 'c';}
        }

        return s;
    }
};
