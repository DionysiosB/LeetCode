class Solution {
public:
    bool checkRecord(string s) {
        bool a(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'A'){
                if(a){return false;}
                a = 1;
            }
            if(p >= 2 && s[p - 2] == 'L' && s[p - 1] == 'L' && s[p] == 'L'){return false;}
        }
        
        return true;
    }
};
