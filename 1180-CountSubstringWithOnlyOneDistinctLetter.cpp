class Solution {
public:
    int countLetters(string s) {
        int cnt(1), cur(1);
        for(int p = 1; p < s.size(); p++){
            if(s[p] == s[p - 1]){++cur;}
            else{cur = 1;}
            cnt += cur;
        }

        return cnt;
    }
}
