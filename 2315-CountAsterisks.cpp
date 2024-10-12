class Solution {
public:
    int countAsterisks(string s) {
        long cnt(0); bool flag(true);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == '|'){flag = !flag;}
            cnt += (s[p] =='*' & flag);
        }

        return cnt;
    }
};
