class Solution {
public:
    int balancedStringSplit(string s) {
        long cs(0), cnt(0);
        for(int p = 0; p < s.size(); p++){
            cs  += (s[p] == 'R') - (s[p] == 'L');
            cnt += (cs == 0);
        }

        return cnt;
    }
}
