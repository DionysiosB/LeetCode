class Solution {
public:
    bool scoreBalance(string s) {

        int total(0);
        for(long p = 0; p < s.size(); p++){total += (s[p] - 'a' + 1);}
        int cs(0);
        for(int p = 0; p < s.size(); p++){
            cs += (s[p] - 'a' + 1);
            if(2 * cs == total){return true;}
            else if(2 * cs > total){return false;}
        }

        return false;
    }
};
