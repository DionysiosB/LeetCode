class Solution {
public:
    int minAddToMakeValid(string s) {
        int f(0), cnt(0);
        for(int p = 0; p < s.size(); p++){
            f += (s[p] == '(') - (s[p] == ')');
            if(f < 0){++cnt; f = 0;}
        }
        
        return cnt + f;
    }
};
