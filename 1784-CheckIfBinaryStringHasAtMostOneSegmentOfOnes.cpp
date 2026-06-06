class Solution {
public:
    bool checkOnesSegment(string s) {

        bool za(true);
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] == '1' && s[p] == '0'){za = true;}
            if(za && s[p - 1] == '0' && s[p] == '1'){return false;}
        }
        return true;
        
    }
};
