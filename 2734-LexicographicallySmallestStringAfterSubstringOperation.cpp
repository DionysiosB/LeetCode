class Solution {
public:
    string smallestString(string s) {

        int idx(0); while(idx < s.size() && s[idx] == 'a'){++idx;}
        if(idx == s.size()){s.back() = 'z'; return s;}

        while(idx < s.size() && s[idx] != 'a'){--s[idx++];}
        return s;
    }
};
