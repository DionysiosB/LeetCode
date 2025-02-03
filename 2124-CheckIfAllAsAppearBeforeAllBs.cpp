class Solution {
public:
    bool checkString(string s) {
        bool d(false);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'b'){d = true;}
            if(s[p] == 'a' && d){return false;}
        }
        return true;
    }
};
